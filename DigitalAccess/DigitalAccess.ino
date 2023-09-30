#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

int contador = 0;

void setup()
{
	// initialize the LCD
	lcd.begin();
	// Turn on the blacklight and print a message.
	lcd.backlight();
  lcd.clear();

  lcd.setCursor(2, 0);
	lcd.print("Los Almendros I");

  lcd.setCursor(1, 1);
	lcd.print("Ingrese # de casa:");
}

void loop()
{
  // lcd.clear();
  // lcd.setCursor(0, 0);
  // // String cadena = "Contador : " + contador;
  // char originalString[20] = "Value: ";
  // char resultString[20];
  // sprintf(resultString, "%s%d", originalString, contador);

  // lcd.print(resultString);
  // delay(1000);
  // contador = contador + 1;
	// // Do nothing here...
}
