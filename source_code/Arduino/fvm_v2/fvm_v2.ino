//------------------------------------------------
// Project     : 
// Board       : ThaiEasyElec's ESPIno
// LED_BUILTIN : Pin 16
//------------------------------------------------

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define PIN_LED_PROCESS   16
#define PIN_PULSEIN       13
#define PIN_BUTTON_0      12

LiquidCrystal_I2C lcd_0(0x27, 16, 2);  

char str_buff[200] = {0};
unsigned long t_old;
volatile unsigned long p_count, p_store;
int state_ix  = 0;

void Interrupt_Service_PulseIn() { p_count++; }

void setup() {
  pinMode(PIN_LED_PROCESS, OUTPUT);
  pinMode(PIN_PULSEIN, INPUT_PULLUP);
  pinMode(PIN_BUTTON_0, INPUT_PULLUP);

  digitalWrite(PIN_LED_PROCESS, LOW);
  digitalWrite(PIN_PULSEIN, HIGH);
  digitalWrite(PIN_BUTTON_0, HIGH);

  attachInterrupt(digitalPinToInterrupt(PIN_PULSEIN)
    , Interrupt_Service_PulseIn, FALLING);  

  Serial.begin(115200); 
  Serial.println("\n\nSystem start..");

  lcd_0.init();
  lcd_0.backlight();
  lcd_0.setCursor(0, 0);
  lcd_0.print("                ");
  lcd_0.setCursor(0, 1);
  lcd_0.print("                ");

  t_old     = 0;
  p_count   = 0;
  p_store   = 0;
  state_ix  = 0;
}

void loop() {
  p_store = p_count;
  p_count = 0;

  sprintf(str_buff, "Freq %6lu Hz  ", p_store);
  Serial.println(str_buff);
  lcd_0.setCursor(0, 1);
  lcd_0.print(str_buff);

//------------------------------------------------
  digitalWrite(PIN_LED_PROCESS, LOW);
  while ((micros() - t_old) < 1000000);
  t_old = micros(); 
  digitalWrite(PIN_LED_PROCESS, HIGH);
//------------------------------------------------
}

