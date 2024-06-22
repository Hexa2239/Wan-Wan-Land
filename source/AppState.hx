package;

import flixel.FlxBasic;
import flixel.FlxG;
import sys.io.File;
import utils.Hscript;

class AppState extends MinawanState
{
	public var state:Hscript = new Hscript();
	public var stateLoaded = false;

	// Hscript thingys
	public function addCustomSprite(spr:FlxBasic)
	{
		trace("A sprite has been added to the queue");
		add(spr);
		trace("Sprite added successfully!");
	}

	override public function create()
	{
		trace("Loading state: " + App.sillyStates[App.curState]);

		try
		{
			var scriptContent = File.getContent("mod/states/" + App.sillyStates[App.curState]);
			state.interp.variables.set("Data", App);
			state.interp.variables.set("Me", this);
			state.loadScript(scriptContent);
			stateLoaded = true;
		}
		catch (e)
		{
			FlxG.switchState(new MessagePrompt("Error running state: " + e, new AppState()));
		}

		if (stateLoaded)
		{
			state.call("onCreate");
		}

		super.create();
	}

	override public function update(elapsed)
	{
		if (stateLoaded)
		{
			state.call("onUpdate", [elapsed]);
		}
		super.update(elapsed);

		// Some keybinds
		processHardcodedKeybinds();
	}

	public function processHardcodedKeybinds()
	{
		if (FlxG.keys.justPressed.R)
		{
			trace("Reloading state! WAN WAN!");
			FlxG.resetState();
		}

		if (FlxG.keys.justPressed.RBRACKET)
		{
			trace("Moving up child!");
			App.updateStateSelection(1);
			FlxG.resetState();
		}
	}

	override public function destroy()
	{
		if (stateLoaded)
		{
			state.call("onDestroy");
		}
		super.destroy();
	}
}