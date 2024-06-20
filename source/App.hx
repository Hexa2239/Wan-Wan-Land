package;

import flixel.FlxG;
import flixel.FlxState;
import haxe.Json;
import sys.io.File;

class App {
    public static var names:Array<Dynamic> = new Array<Dynamic>();
    public static var defaultMinawans:Dynamic = 0;
	public static var thisVer = "0.0.1";

	public static var spriteNames:Array<Dynamic> = new Array<Dynamic>();



	public static var coreLoaded = false;

    public static function initCore() {
		getMinaData();
		// getSpriteData(); A feature that was  removed.
    }

	public static function getMinaData()
	{
        var nameFile = File.getContent("assets/data/data.json");
        
        var json = Json.parse(nameFile);

        names = json.names;
        defaultMinawans = json.maxLimit;
        trace("Names Loaded!");
		coreLoaded = true;
	}
	public static function getSpriteData()
	{
		var spriteFile = File.getContent("assets/images/mina/data.json");

		var jsonParsed = Json.parse(spriteFile);

		
		spriteNames = jsonParsed.spriteList;
		trace("Sprites Files Loaded!");
	}

}