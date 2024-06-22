package;

import flixel.FlxG;
import flixel.FlxState;
import haxe.Json;
import sys.FileSystem;
import sys.io.File;

class App {

    public static var defaultMinawans:Dynamic = 0;
	public static var thisVer = "0.0.1";

	// States System
	public static var sillyStates = new Array<Dynamic>();
	public static var curState = 0;




	public static var coreLoaded = false;

    public static function initCore() {
		getMinaData();
		getStates();
    }

	public static function getMinaData()
	{
		var dataFile = File.getContent("assets/data/data.json");

		var json = Json.parse(dataFile);


        defaultMinawans = json.maxLimit;
		trace("Data Loaded!");

	}
	public static function getStates()
	{
		/*
		var statesData = File.getContent("mod/states/states.json");

		var json = Json.parse(statesData);

		var states:Array<Dynamic> = json.states;
		for (state in states)
		{
			trace("Pushing state: " + state);
			sillyStates.push(state + ".hxc");
			trace("Successfully pushed" + state);
		}

		trace("All states loaded!");
																								coreLoaded = true;
		 */

		var statesPath = "mod/states/";
		if (FileSystem.exists(statesPath) && FileSystem.isDirectory(statesPath))
		{
			var files = FileSystem.readDirectory(statesPath);

			var fileList = [];
			for (file in files)
			{
				trace("Pushing " + file + " to stack");
				sillyStates.push(file);
				trace("Successfully pushed " + file + " to state stack");
			}
		}

		coreLoaded = true;
	}

	public static function updateStateSelection(huh)
	{

		curState += huh;

		if (curState > sillyStates.length - 1)
		{
			curState = 0;
		}
		else if (curState < 0)
		{
			curState = sillyStates.length - 1;
		}

		trace("State selection updated! WAN WAN");
	}

}