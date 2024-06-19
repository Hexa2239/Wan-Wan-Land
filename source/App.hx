package;

import flixel.FlxG;
import flixel.FlxState;
import haxe.Json;
import sys.io.File;

class App {
    public static var names:Array<Dynamic> = new Array<Dynamic>();
    public static var defaultMinawans:Dynamic = 0;
	public static var thisVer = "0.0.1";

	public static var curState = 0;
	public static var maxState = 1;


	public static var coreLoaded = false;

    public static function initCore() {
        getAllNames();
    }

    public static function getAllNames() {
        var nameFile = File.getContent("assets/data/data.json");
        
        var json = Json.parse(nameFile);

        names = json.names;
        defaultMinawans = json.maxLimit;
        trace("Names Loaded!");
		coreLoaded = true;
    }
	public static function changeSelection(huh)
	{
		curState += huh;

		if (App.curState > maxState)
		{
			curState = 0;
		}
		else if (App.curState < 0)
		{
			curState = maxState;
		}

		trace("Ho ho ho! Merry changing state time\nNew State: " + App.curState);
	}
}