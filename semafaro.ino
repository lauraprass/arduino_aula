int carroRed = 8;
int carroGreen = 9;
int carroYellow = 10;
int pinoVermelhoPedestre = 11;
int pinoVerdePedestre = 12;
int tempoEsperaPedestre = 5000;
unsigned long tempodeMudanca;
int botao = 2;




void setup() {
  // put your setup code here, to run once:
  pinMode(carroRed, OUTPUT);
  pinMode(carroGreen, OUTPUT);
  pinMode(carroYellow, OUTPUT);
  pinMode(pinoVermelhoPedestre, OUTPUT);
  pinMode(pinoVerdePedestre, OUTPUT);
  pinMode(botao, INPUT);

  digitalWrite(carroGreen, HIGH);
  digitalWrite(pinoVermelhoPedestre, HIGH);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int estadoBotao = digitalRead(botao);
  Serial.println(estadoBotao);
  if (estadoBotao == HIGH && (millis() - tempodeMudanca) > 5000) {

    modificarLuzes();
  }

}

void modificarLuzes(){

  digitalWrite(carroGreen, LOW);
  digitalWrite(carroYellow, HIGH);
  delay(2000);

  digitalWrite(carroYellow, LOW);
  digitalWrite(carroRed, HIGH);
  delay(1000);

  digitalWrite(pinoVermelhoPedestre, LOW);
  digitalWrite(pinoVerdePedestre, HIGH);
  delay(tempoEsperaPedestre);

  for (int x=0; x < 10; x++){

    digitalWrite(pinoVerdePedestre, HIGH);
    delay(260);

    digitalWrite(pinoVerdePedestre, LOW);
    delay(260);
  }

  digitalWrite(pinoVermelhoPedestre, HIGH);
  delay(500);

  digitalWrite(carroYellow, HIGH);
  digitalWrite(carroRed, LOW);
  delay(1000);

  digitalWrite(carroGreen, HIGH);
  digitalWrite(carroYellow, LOW);

  tempodeMudanca = millis();
}