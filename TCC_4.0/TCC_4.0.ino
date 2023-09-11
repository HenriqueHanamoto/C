


/*Código para o projeto integrador*/

int trigF = 8;      /*Definição dos pinos para os sensores*/
int echoF = 7;
long duracaoF = 0;
int distanciaF = 0;
char B;
void setup() 
{
  Serial.begin(9600);
  pinMode(trigF, OUTPUT);
  pinMode(echoF, INPUT);
 
 
}

void loop() 
{
  
   if(Serial.available() > 0)
   { 
    B = (char) Serial.read();
     if (B == 'a'){ //bit de verificação//
      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);

      duracaoF = pulseIn(echoF, HIGH);    //Coleta de dados pelos sensores e//
      distanciaF = duracaoF/58;            // transformação para centimetros//
      if(distanciaF <= 400){
        //Serial.println("Distância em cm Frente:  ");
        //Serial.print ("Frente");
        Serial.println (distanciaF);
         delay(1500);
      }
        
     }
     if (B == 'b'){ //bit de verificação//
      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);

      duracaoF = pulseIn(echoF, HIGH);    //Coleta de dados pelos sensores e//
      distanciaF = duracaoF/58;            // transformação para centimetros//
      if(distanciaF <= 400){
        //Serial.println("Distância em cm Frente:  ");
        //Serial.print ("Frente");
        Serial.println (distanciaF);
         delay(1500);
      }
        
     }
      if (B == 'c'){ //bit de verificação//
      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);

      duracaoF = pulseIn(echoF, HIGH);    //Coleta de dados pelos sensores e// 
      distanciaF = duracaoF/58;            // transformação para centimetros//
      if(distanciaF <= 400){
        Serial.println (distanciaF);
         delay(1500);
      }

 
   }
   }
   }
