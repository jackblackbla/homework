#define PIN_LED 13
unsigned int count, toggle;
unsigned int toggle_state(int a) {
  a++;
  a%=2;
  return a;};
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
  
    Serial.println(++count);
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(1000);
}
