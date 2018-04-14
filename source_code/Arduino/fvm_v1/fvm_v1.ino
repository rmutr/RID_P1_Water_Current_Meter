#define PIN_LED_PROCESS       13
#define PIN_PULSEIN           10

char str_buff[200] = {0};
unsigned long t_old;
volatile unsigned long p_count, p_store;

void Interrupt_Service_PulseIn() { p_count++; }

void setup() {
  pinMode(PIN_LED_PROCESS, OUTPUT);
  pinMode(PIN_PULSEIN, INPUT_PULLUP);

  digitalWrite(PIN_LED_PROCESS, LOW);

  attachInterrupt(digitalPinToInterrupt(PIN_PULSEIN)
    , Interrupt_Service_PulseIn, FALLING);  

  Serial.begin(115200); 
  Serial.println("\nSystem start..");

  t_old     = 0;
  p_count   = 0;
  p_store   = 0;
}

void loop() {
  digitalWrite(PIN_LED_PROCESS, HIGH);
  p_store = p_count;
  p_count = 0;

  sprintf(str_buff, "Freq -> %6lu Hz \n", p_store);
  Serial.print(str_buff);

  digitalWrite(PIN_LED_PROCESS, LOW);
  while ((micros() - t_old) < 1000000);
  t_old = micros(); 
}

