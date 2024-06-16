package;

import haxe.Json;
import sys.io.File;

class App {
    public static var names:Array<Dynamic> = new Array<Dynamic>();
    public static var defaultMinawans:Dynamic = 0;

    public static function initCore() {
        getAllNames();
    }

    public static function getAllNames() {
        var nameFile = File.getContent("assets/data/data.json");
        
        var json = Json.parse(nameFile);

        names = json.names;
        defaultMinawans = json.maxLimit;
        trace("Names Loaded!");
    }
}