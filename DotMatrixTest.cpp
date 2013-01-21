#include "DotMatrixTest.h"

#include "drvdm_hd44780.h"
#include "dot-matrix.h"
#include "vfont_6x3.h"
#include "dot-font.h"
#include "dot-string.h"

DrvDmHd44780 lcd(7, 6, 5, 4, 3, 2, 4);
DotMatrix dm = lcd.getDotMatrix();
DotFont df(dm);

void setup()
{
	lcd.init();
	df.setPattern(VFONT_6X3, VFONT_6X3_STATE);

	dm.clear();
}

void loop()
{
	static int i = 0;

	dm.clear();

	DotString ds(df, 8);
	ds.printf("%4d", i);
	ds.postAt(0, 3);
	lcd.convertDotMatrixToCache();
	lcd.putCache();
	i++;

	delay(100);
}
