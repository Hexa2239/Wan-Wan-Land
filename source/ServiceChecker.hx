package;

import flixel.FlxState;
import sys.Http;

class ServiceChecker extends FlxState {

    override public function create() {

        // Check Github if this version is latest version.

        App.initCore(); // Gets all data required for the app to run!

        var request = new Http("");   
    }
}