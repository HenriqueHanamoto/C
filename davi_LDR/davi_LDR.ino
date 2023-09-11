/*programa LDR*/
//Variaveis-------------------------------
int pinoLed = 2;
int pinoLdr = A0;
float ValorLdr = 0;
//definindo os pinos----------------------
void setup() {
  Serial.begin(9600);
  pinMode(pinoLdr, INPUT);
  pinMode(pinoLed, OUTPUT);

}

void loop() {
  ValorLdr = analogRead(pinoLdr);
  Serial.print("Valor lido pelo LDR:  ");
  Serial.println(ValorLdr);
  delay(200);

  if(ValorLdr < 500){
    digitalWrite(pinoLed, HIGH);

  }
  else{
    digitalWrite(pinoLed, LOW);
  }

}
