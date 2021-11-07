#include <TangibleActions.h>

#include <Arduino.h>


LiquidCrystal_I2C lcd(0x27, 20, 4);

void Actions::lcd_begin()
{
    lcd.init();
    lcd.backlight();
    //Serial.println("batata");
}

void Actions::printa(char *a, int line)
{
    Serial.println(a);
    lcd.setCursor(0, line - 1);
    lcd.print(a);
}

void Actions::pisca(int pin)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
}

void Actions::acende(int pin)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);
    delay(200);
}

void Actions::scroll(char *a, int line)
{
    lcd.setCursor(0, line);

    //lcd.autoscroll();
    //char frase[] = a;
    int tamanho = strlen(a);
    //printa((tamanho));
    int letra = 0;
    //for (letra = 0; letra < tamanho; letra++)
    //{

    //  lcd.print(frase[letra]);

    //delay(600);
    //}
    //lcd.noAutoscroll();
}

void Actions::apaga(int pin)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    delay(200);
}

void Actions::beep(int pin)
{
    pinMode(pin, OUTPUT);
    tone(pin, 1500);
    delay(500);
    noTone(pin);
    delay(500);
}

void Actions::beep_music(int pin)
{
    pinMode(pin, OUTPUT);
    delay(2000);
    tone(pin, 262, 200); //DO
    delay(200);
    tone(pin, 294, 300); //RE
    delay(200);
    tone(pin, 330, 300); //MI
    delay(200);
    tone(pin, 349, 300); //FA
    delay(300);
    tone(pin, 349, 300); //FA
    delay(300);
    tone(pin, 349, 300); //FA
    delay(300);
    tone(pin, 262, 100); //DO
    delay(200);
    tone(pin, 294, 300); //RE
    delay(200);
    tone(pin, 262, 100); //DO
    delay(200);
    tone(pin, 294, 300); //RE
    delay(300);
    tone(pin, 294, 300); //RE
    delay(300);
    tone(pin, 294, 300); //RE
    delay(300);
    tone(pin, 262, 200); //DO
    delay(200);
    tone(pin, 392, 200); //SOL
    delay(200);
    tone(pin, 349, 200); //FA
    delay(200);
    tone(pin, 330, 300); //MI
    delay(300);
    tone(pin, 330, 300); //MI
    delay(300);
    tone(pin, 330, 300); //MI
    delay(300);
    tone(pin, 262, 200); //DO
    delay(200);
    tone(pin, 294, 300); //RE
    delay(200);
    tone(pin, 330, 300); //MI
    delay(200);
    tone(pin, 349, 300); //FA
    delay(300);
    tone(pin, 349, 300); //FA
    delay(300);
    tone(pin, 349, 300); //FA
    delay(300);
}

void Actions::doBeep(void)
{
    Serial.println("BEEP  ");
}

void Actions::doBlink(void)
{
    Serial.println("PISCA  ");
}

void Actions::doTurn90(void)
{
    Serial.println("GIRAR 90º  ");
}

void Actions::doTurn45(void)
{
    Serial.println("GIRAR 45º  ");
}

void Actions::doTurn30(void)
{
    Serial.println("GIRAR 30º  ");
}

void Actions::doTurn60(void)
{
    Serial.println("GIRAR 60º  ");
}

void Actions::doMove(void)
{
    Serial.println("MOVER FRENTE  ");
}