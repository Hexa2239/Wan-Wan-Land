package;

import flixel.addons.ui.FlxUIState;
import utils.MemUtil;

class MinawanState extends FlxUIState
{
	override public function destroy()
	{
		trace("Clearing Unused Memory!");
		MemUtil.clearAll(); // MemUtil made by Voiddev
	}
}