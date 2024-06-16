package;

import flixel.FlxG;
import flixel.FlxState;
import sys.Http;

class ServiceChecker extends FlxState {

	var preloading = false;

    override public function create() {

        // Check Github if this version is latest version.

        App.initCore(); // Gets all data required for the app to run!

		while (App.coreLoaded && preloading == false)
		{
			preloading = true;
			FlxG.switchState(new PlayState());
		}
    }
}