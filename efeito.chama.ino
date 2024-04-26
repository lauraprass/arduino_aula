int led1 = 9;
int led2 = 10;
int led3 = 11;



void setup() {
  
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

}

void loop() {

  analogWrite(led1,random(120)+136);
  analogWrite(led2,random(120)+136);
  analogWrite(led3,random(120)+136);

  //Delay com valor aleatório entre 0 e 100ms
  delay(random(100));
}
