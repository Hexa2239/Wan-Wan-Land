package;

import flixel.FlxG;
import flixel.FlxState;
import sys.Http;

class ServiceChecker extends FlxState {

	var preloading = false;

    override public function create() {

        // Check Github if this version is latest version.


        App.initCore(); // Gets all data required for the app to run!

		FlxG.autoPause = false;

		if (FlxG.save.data.greenScreen == null)
		{
			FlxG.save.data.greenScreen = false;
		}

		var httpRequest = new haxe.Http("https://raw.githubusercontent.com/Hexa2239/Hexa2239/main/data/minaland.ver");

		httpRequest.onData = function(response:String)
		{
			trace(response);

			if (response != App.thisVer)
			{
				trace("ERROR: App is outdated so download required.");
				FlxG.switchState(new MessagePrompt("Your version of Wan Wan Land is outdated!\nIt is recommended to update due to the possible amount of lag this app may have. \nYou don't have to though.",
					new PlayState()));
			}
			else
			{
				while (App.coreLoaded && preloading == false)
				{
					preloading = true;
					FlxG.switchState(new PlayState());
				}
			}
		}

		httpRequest.onError = function(error:String)
		{
			trace("I was unable to reach the Hexa Network\nError: " + error);
			Sys.exit(0);
			return;
		}

		httpRequest.request();




    }
}