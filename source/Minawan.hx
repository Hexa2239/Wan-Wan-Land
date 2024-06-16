package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;

class Minawan extends FlxSprite {

    public var direction = 1;
    public var minawanName:String = "";
    public var minawanNameDisplay:FlxText;


    public function new() {
        minawanName = App.names[FlxG.random.int(0, App.names.length)];
        trace("Hi my name is " + minawanName);

        minawanNameDisplay = new FlxText(this.getGraphicMidpoint().x, this.getGraphicMidpoint().y - 100, minawanName);


        super();
    }
}   