package appmodes;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;

class MinawanFall extends MinawanState
{
	public var minawanSprite:Array<Minawan> = new Array<Minawan>();
	public var amountOfCharacters = 0;

	public static var hasSeenLagWarning = false;

	var switcher = 0;

	override public function create()
	{
		trace("Minawan Scatter");

		if (hasSeenLagWarning == false)
		{
			hasSeenLagWarning = true;
			FlxG.switchState(new MessagePrompt("This may lag your PC. Make sure your PC is properly equipped to handle the massive amounts of these objects.\nCurrent Amount of Minawan to spawn: "
				+ App.defaultMinawans,
				new appmodes.MinawanFall()));
		}

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

		super.create();
	}

	override public function update(elapsed)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.LBRACKET)
		{
			FlxG.switchState(new MinawanDVD());
		}

		while (amountOfCharacters < App.defaultMinawans)
		{
			createMinawan();
		}

		for (minawan in minawanSprite)
		{
			minawan.velocity.set(0, 200);

			if (minawan.y > FlxG.height)
			{
				minawan.y = FlxG.random.int(-30, -80);
			}
		}
	}

	public function createMinawan()
	{
		var character = new Minawan();

		var silly = FlxG.random.float(1, 3);

		character.x = FlxG.random.int(0, FlxG.width - 50);
		character.y = FlxG.random.int(0, FlxG.height - 50);

		character.loadGraphic("assets/images/minawan.png");
		if (FlxG.save.data.greenScreen)
		{
			character.color = FlxColor.fromRGB(FlxG.random.int(10, 100), FlxG.random.int(10, 60), FlxG.random.int(100, 120));
		}
		else
		{
			character.color = FlxColor.fromRGB(FlxG.random.int(100, 255), FlxG.random.int(100, 255), FlxG.random.int(100, 255));
		}

		character.scale.set(silly, silly); // Not animated :( Haxeflixel doesn't support it naturally.
		add(character);
		minawanSprite.push(character);
		amountOfCharacters += 1;
	}
}