package appmodes;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class MinawanDVD extends MinawanState
{
	private var logo:Minawan;
	private var speedX:Float = 200;
	private var speedY:Float = 150;

	override public function create():Void
	{
		super.create();

		var background = new FlxSprite();
		if (FlxG.save.data.greenScreen == false)
		{
			background.loadGraphic("assets/images/cerberMenu.png");
		}
		else
		{
			background.alpha = 1;
			background.makeGraphic(FlxG.width, FlxG.height, FlxColor.GREEN);
		}
		add(background);

		if (FlxG.save.data.greenScreen == false)
		{
			var cerber = new FlxSprite();
			cerber.y = 400;
			cerber.alpha = 0.6;
			cerber.screenCenter(X);
			cerber.loadGraphic("assets/images/cerberSprite.png");
			add(cerber);
		}

		// Load the logo sprite
		logo = new Minawan();
		logo.loadGraphic("assets/images/minawan.png"); // Replace with the path to your logo image
		logo.scale.set(3, 3);
		add(logo);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.LBRACKET)
		{
			FlxG.switchState(new MinawanWalk());
		}

		// Move the logo
		logo.x += speedX * elapsed;
		logo.y += speedY * elapsed;

		// Check for collisions with the screen edges
		if (logo.x <= 0 || logo.x + logo.width >= FlxG.width)
		{
			speedX *= -1;
			if (FlxG.save.data.greenScreen == false)
			{
				logo.color = FlxColor.fromRGB(FlxG.random.int(0, 255), FlxG.random.int(0, 255), FlxG.random.int(0, 255));
			}

			// checkCorner();
		}

		if (logo.y <= 0 || logo.y + logo.height >= FlxG.height)
		{
			speedY *= -1;
			if (FlxG.save.data.greenScreen == false)
			{
				logo.color = FlxColor.fromRGB(FlxG.random.int(0, 255), FlxG.random.int(0, 255), FlxG.random.int(0, 255));
			}
			// checkCorner();
		}
	}
}