/*Porgrama conversor A/D 28-07*/
//Variaveis de manipulação----------------------
float tensao = 0;
int sensor = A0;
float resolucao = 0;
//Setup-----------------------------------------
void setup(){
  Serial.begin(9600);//habilita o monitor serial
  pinMode (sensor, INPUT);
}
// Loop-----------------------------------------
void loop (){
  resolucao = analogRead(sensor);
  Serial.print("Valor da resolução do pino A0 em Decimal:  ");
  Serial.println(resolucao);
  delay(1000);

  tensao = analogRead(sensor)*5.0/1023.0;
  Serial.print("O valor da tensão no pino A0:  ");
  Serial.println(tensao);
  delay(1000);
  
}
