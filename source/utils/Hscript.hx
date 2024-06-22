package utils;

import StringTools;
import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import hscript.Interp;
import hscript.Parser;

/**
uwu - Credits to VoidDev for the HScript basic.
I added some newer things but removed them due to it not existing
**/
class Hscript extends FlxBasic
{
	public var interp = new Interp();
	public var parser = new Parser();
	public var script:hscript.Expr;
	public function new()
	{
		parser.allowTypes = true;
		parser.allowJSON = true;
		parser.allowMetadata = true;
		interp.variables.set("Int", Int);
		interp.variables.set("String", String);
		interp.variables.set("Float", Float);
		interp.variables.set("Array", Array);
		interp.variables.set("Bool", Bool);
		interp.variables.set("Dynamic", Dynamic);
		interp.variables.set("Math", Math);
		interp.variables.set("Main", Main);
		interp.variables.set("FlxMath", FlxMath);
		interp.variables.set("Std", Std);
		interp.variables.set("StringTools", StringTools);
		interp.variables.set("FlxG",FlxG);
		interp.variables.set("FlxSound",FlxSound);
		interp.variables.set("FlxSprite",FlxSprite);
		interp.variables.set("FlxText",FlxText);
		interp.variables.set("FlxTween",FlxTween);
		interp.variables.set("FlxColor", FlxColor.fromRGB);
		interp.variables.set("Minawan", Minawan);
		
		super();

	}

	public function call(funcName:String, ?args:Array<Dynamic>):Dynamic
	{
		if (args == null)
			args = [];
		// if(!running) return true;
		try
		{
			var func:Dynamic = interp.variables.get(funcName);
			if (func != null && Reflect.isFunction(func))
				return Reflect.callMethod(null, func, args);
		}
		catch (e)
		{
			// scriptType = EmptyScript;
			FlxG.log.add(e.details());
			// running = false;
		}
		return true;
	}

	public function loadScript(content:String)
	{
		script = parser.parseString(content);
		interp.execute(script);
	}
}
