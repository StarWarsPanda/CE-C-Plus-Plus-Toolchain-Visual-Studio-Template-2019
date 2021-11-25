#include <tice.h>
#include <keypadc.h>
#include <graphx.h>
#include <stdio.h>
#include <math.h>

kb_key_t key;

int main(void)
{
	gfx_Begin();

	/* If you see the white screen, then the buffer draw did not work! */
	gfx_FillScreen(255);

	/* Set up a buffer to not have flashing */
	gfx_SetDrawBuffer();

	do
	{
		/* Keyboard events */
		kb_Scan();

		/*Clear screen*/
		gfx_FillScreen(0);

		/* Draw a rectangle with a color */
		gfx_SetColor(74);
		gfx_FillRectangle(135, 95, 50, 50);

		/* Swap the buffer and the screen to update the frame */
		gfx_SwapDraw();

	} while ((key & kb_Data[6]) != kb_Clear);

	gfx_End();
	
	return 0;
}
