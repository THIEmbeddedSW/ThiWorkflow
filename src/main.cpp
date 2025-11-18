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
char programVersion[] = "1.0.0";
char featureString[] = "f: ";
char newFeatureA[] = "A";
char newFeatureB[] = "B";
char newFeatureD[] = "D";


/*-----------------------------------------------------------------------------
 *  Function with new feature
 -----------------------------------------------------------------------------*/
void fA()
{
    strcat(featureString, newFeatureA);
}

/*-----------------------------------------------------------------------------
 *  Function with new feature
 -----------------------------------------------------------------------------*/
void fB()
{
    strcat(featureString, newFeatureB);
}

 /*-----------------------------------------------------------------------------
 *  Function with new feature
 -----------------------------------------------------------------------------*/
void fD()
{
    strcat(featureString, newFeatureD);
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
   fB();
   fD();

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

