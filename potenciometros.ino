int pot = A0; 
int led = 3; 

int valorPot = 0; 

void setup () { 

pinMode(led,OUTPUT); 

}

void loop () {  
  
valorPot = analogRead(pot); 

valorPot = map (valorPot,0,1023,0,255); 

analogWrite(led,valorPot ); 

}