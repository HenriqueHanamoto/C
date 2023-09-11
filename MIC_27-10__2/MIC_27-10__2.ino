int trig = 8;
int echo = 7;
long duracao = 0;
long distancia = 0;
char entrada;
void setup() 

{

  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}


void loop() 
{
  if(Serial.available() > 0)
  {
    entrada = (char) Serial.read();
    if ((entrada == 'M')||(entrada == 'm'))
    {
      digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);
 

      duracao = pulseIn(echo, HIGH);
      distancia = duracao/58;

   
        Serial.print("Distância em cm:  ");
        Serial.println(distancia);

     }

  }

}
