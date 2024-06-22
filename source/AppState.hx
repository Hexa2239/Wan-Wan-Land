package;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.text.FlxText;
import sys.io.File;
import utils.Hscript;

class AppState extends MinawanState
{
	public var state:Hscript = new Hscript();
	public var stateLoaded = false;
	public var amountOfSprites = 0;

	public var infoTxt:FlxText;

	var infoEnabled = false;

	// Hscript thingys
	public function addCustomSprite(spr:FlxBasic)
	{
		trace("A sprite has been added to the queue");
		add(spr);
		amountOfSprites += 1;
		trace("Sprite added successfully!");
	}

	override public function create()
	{
		infoTxt = new FlxText(0, 25, "LOADING");
		infoTxt.screenCenter(X);
		

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
		if (infoEnabled)
		{
			infoTxt.text = "Cur State: " + App.sillyStates[App.curState] + " | Rendered Sprites: " + amountOfSprites;
			infoTxt.size = 16;
			infoTxt.screenCenter(X);
		}
	}

	public function processHardcodedKeybinds()
	{
		if (FlxG.keys.justPressed.R)
		{
			trace("Reloading state! WAN WAN!");
			FlxG.resetState();
		}

		if (FlxG.keys.justPressed.NINE)
		{
			infoEnabled = !infoEnabled;
			if (infoEnabled)
			{
				add(infoTxt);
			}
			else
			{
				remove(infoTxt);
			}
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