#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
  
}
void loop() {
  delay(1000);
    
      for (int i = 0 ; i<6; i++){
      digitalWrite(PIN_LED,0);
      delay(100);
      digitalWrite(PIN_LED,1);
      delay(100);}
      
      
      
    while (1) {digitalWrite(PIN_LED,1);}
}
