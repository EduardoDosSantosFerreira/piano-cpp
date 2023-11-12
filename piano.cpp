#define C 13
#define D 12
#define E 11
#define F 10
#define G 8
#define A 7
#define B 6
#define CO 5
#define buzz 9

#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);

void setup() {
  
  Serial.begin(9600);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(CO, INPUT);
  pinMode(buzz, OUTPUT);
  lcd_1.begin(16, 2);
  
}

void loop() {
  
  if(digitalRead(C) == HIGH) {
    tone(buzz, 264, 100);
    lcd_1.print("  Nota: Do");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(D) == HIGH) {
    tone(buzz, 296, 100);
    lcd_1.print("  Nota: Re");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(E) == HIGH) {
    tone(buzz, 332, 100);
    lcd_1.print("  Nota: Mi");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(F) == HIGH) {
    tone(buzz, 352, 100);
    lcd_1.print("  Nota: Fa");
    delay(10000);
    lcd_1.clear();
  }
  if(digitalRead(G) == HIGH) {
    tone(buzz, 395, 100);
    lcd_1.print("  Nota: Sol");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(A) == HIGH) {
    tone(buzz, 444, 100);
    lcd_1.print("  Nota: La");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(B) == HIGH) {
    tone(buzz, 498, 100);
    lcd_1.print("  Nota: Si");
    delay(100);
    lcd_1.clear();
  }
  if(digitalRead(CO) == HIGH) {
    tone(buzz, 528, 100);
    lcd_1.print("  Nota: Do");
    delay(100);
    lcd_1.clear();
  }
}