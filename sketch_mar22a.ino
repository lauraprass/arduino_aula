#define  PinoBotao 2
const int ledPin = 13;

int buttonState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pinMode, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  Serial.println(digitalRead(PinoBotao));
  buttonState = digitalRead(PinoBotao);
  

  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }

}