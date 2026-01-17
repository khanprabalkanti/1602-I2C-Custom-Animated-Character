#include<I2C_LCD.h>

I2C_LCD lcd(0x27);

byte batteryEmpty[8]{
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
};
byte battery_1[8]{
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
};
byte battery_2[8]{
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
};
byte battery_3[8]{
  B01110,
  B11011,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
};
byte battery_4[8]{
  B01110,
  B11011,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

byte battery_5[8]{
  B01110,
  B11011,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};
byte batteryFull[8]{
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};
void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.backlight();
  lcd.createChar(0, batteryEmpty);
  lcd.createChar(1, battery_1);
  lcd.createChar(2, battery_2);
  lcd.createChar(3, battery_3);
  lcd.createChar(4, battery_4);
  lcd.createChar(5, battery_5);
  lcd.createChar(6, batteryFull);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<=6; i++){
    lcd.setCursor(0, 0);
    lcd.write(byte(i));
    delay(500);
  }

}
