package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import openfl.text.TextFormatAlign;

class MessagePrompt extends FlxState
{
	var message = "";
	var exitState:FlxState;

	public function new(msg:String, state:FlxState)
	{
		message = msg + "\nPress ENTER to continue.";
		exitState = state;
		super();
	}

	override public function create()
	{
		var text:FlxText = new FlxText(0, 0, message, 16);
		text.alignment = FlxTextAlign.CENTER;
		text.screenCenter();
		add(text);
	}

	override public function update(elapsed)
	{
		if (FlxG.keys.justPressed.ENTER)
		{
			FlxG.switchState(exitState);
		}

		super.update(elapsed);
	}
}