/**
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include <LcdMenu.h>
#include <MenuScreen.h>
#include <display/LiquidCrystalAdapter.h>
#include <renderer/CharacterDisplayRenderer.h>


// define the required LCD objects
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
CharacterDisplayRenderer renderer(new LiquidCrystalAdapter(&lcd, 16, 2), 16, 2);
LcdMenu menu(renderer);

// some strings for displaying the features
char programVersion[] = "0.0.1";
char featureString[] = "f: ";
char newFeatureA[] = "A";

/*-----------------------------------------------------------------------------
 *  Function with new feature
 -----------------------------------------------------------------------------*/
void fA()
{
    strcat(featureString, newFeatureA);
}

/*-----------------------------------------------------------------------------
 *  setup function
 -----------------------------------------------------------------------------*/
void setup()
{
    renderer.begin();
    lcd.clear();

	lcd.setCursor(0,0);
	lcd.print("v");
	lcd.print(programVersion);

    // integrate new features hereafter
   fA();

    // display new features
    lcd.setCursor(0,1);
	lcd.print(featureString);
}

/*-----------------------------------------------------------------------------
 *  endless loop
 -----------------------------------------------------------------------------*/
void loop()
{
}

