package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;

class PlayState extends FlxState
{

	public var minawanSprites:Array<Minawan> = new Array<Minawan>(); // I was going to add names but I changed my mind and its a bit complicated
	var amountOfCharacters = 0;
	private var direction:Int = 1;

	var offset = 20;

	var grabbing = false;
	var minawanGrabbed:Minawan;
	

	override public function create()
	{
		var background = new FlxSprite();
		background.loadGraphic("assets/images/cerberMenu.png");
		add(background);

		var cerber = new FlxSprite();
		cerber.y = 400;
		cerber.alpha = 0.6;
		cerber.screenCenter(X);
		cerber.loadGraphic("assets/images/cerberSprite.png");
		add(cerber);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		while (amountOfCharacters < App.defaultMinawans)
		{
			
			var character = new Minawan();

			var possible = FlxG.random.int(0, 1);
			if (possible == 1) {
				character.direction = -1;
			} else {
				character.direction = 1;
			}

			var silly = FlxG.random.float(1, 3);
			
			character.x = FlxG.random.int(30, FlxG.width - 50);
			character.y = FlxG.height - 30 - silly * 10 + offset;
			character.loadGraphic("assets/images/minawan.png");
			character.scale.set(silly, silly); // Not animated :( Haxeflixel doesn't support it naturally.
			add(character);
			minawanSprites.push(character);
			amountOfCharacters += 1;
		}

		for (character in minawanSprites) {
			character.x += character.direction * 100 * elapsed / 2;

			if (character.direction == -1) {
				character.flipX = false;		
			} else {
				character.flipX = true;
			}

			// Check for collisions with the screen edges
			if (character.x <= 0 || character.x + character.width >= FlxG.width)
			{
				character.direction *= -1;
				
				
			}
		}

		if (FlxG.keys.justPressed.R)
		{
			FlxG.resetState();
		}

		if (FlxG.keys.justPressed.SPACE)
		{
			var character = new Minawan();

			var possible = FlxG.random.int(0, 1);
			if (possible == 1)
			{
				character.direction = -1;
			}
			else
			{
				character.direction = 1;
			}

			var silly = FlxG.random.float(1, 3);

			character.x = FlxG.random.int(30, FlxG.width - 50);
			character.y = FlxG.height - 30 - silly * 10 + offset;
			character.loadGraphic("assets/images/minawan.png");
			character.scale.set(silly, silly); // Not animated :( Haxeflixel doesn't support it naturally.
			add(character);
			minawanSprites.push(character);
			amountOfCharacters += 1;
		}

		minawanGrabbing();

		super.update(elapsed);
	}

	var droppingMinawan:Bool = false;

	public function minawanGrabbing() {
		
		for (minawan in minawanSprites) {
			if (FlxG.mouse.overlaps(minawan) && FlxG.mouse.pressed && grabbing == false)
			{
				grabbing = true;
				minawanGrabbed = minawan;
			}
		}
		
		if (FlxG.mouse.justPressed && grabbing == true) {
			droppingMinawan = true;
			grabbing = false;
		}
		
		if (droppingMinawan) {
			var hasCollided = true;

			while(minawanGrabbed.y < FlxG.height - 30 - minawanGrabbed.scale.x * 10 + offset) {
				minawanGrabbed.y += 0.5;
				hasCollided = false;
			}

			if (hasCollided) {
				grabbing = false;
				minawanGrabbed = null;
				droppingMinawan = false;
			}

			
		}

		if (grabbing) {
			minawanGrabbed.x = FlxG.mouse.x;
			minawanGrabbed.y = FlxG.mouse.y;
		}
	}
}