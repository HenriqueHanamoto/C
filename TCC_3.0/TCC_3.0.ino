/*Código para o projeto integrador*/

//#include <SoftwareSerial.h>
//SoftwareSerial bluetooth (2,3);  //TX=2, RX=3//

int trigF = 8;      /*Definição dos pinos para os sensores*/
int echoF = 7;
long duracaoF = 0;
int distanciaF = 0;
int trigD = 9;
int echoD = 10;
long duracaoD = 0;
int distanciaD = 0;
int trigE = 11;
int echoE = 12;
long duracaoE = 0;
int distanciaE = 0;

//#define Porta13 13 //"Bit de verificação"//
//int Status13 = 0;
char B;

void setup() 
{
  Serial.begin(9600);
  pinMode(trigF, OUTPUT);
  pinMode(echoF, INPUT);
  pinMode(trigD, OUTPUT);
  pinMode(echoD, INPUT);   //Definindo os modos dos pinos//
  pinMode(trigE, OUTPUT);
  pinMode(echoE, INPUT);
 
}

void loop() 
{
  
   if(Serial.available() > 0)
   { 
    B = (char) Serial.read();
     if (B == 'a'){ //bit de verificação//

  //Sensor Frontal//

      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);

      duracaoF = pulseIn(echoF, HIGH);    //Coleta de dados pelos sensores e//
      distanciaF = duracaoF/58;            // transformação para centimetros//
      if(distanciaF < 300){
        //Serial.println("Distância em cm Frente:  ");
        //Serial.print ("Frente");
        Serial.println (distanciaF);
      }
        
        
        
     }

  
     if (B == 'b'){//bit de verificação//

      //sensor da Direita//
      
     digitalWrite(trigD, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigD, LOW);
 
      duracaoD = pulseIn(echoD, HIGH);    //Coleta de dados pelos sensores e//
      distanciaD = duracaoD/58;             // transformação para centimetros//

       if(distanciaD < 300){
        //Serial.print ("Direita");
        Serial.println (distanciaD);
      }
      
     }
  
      
     if (B == 'c'){//bit de verificação//
//Sensor Esquerda//
      digitalWrite(trigE, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigE, LOW);
 

      duracaoE = pulseIn(echoE, HIGH);    //Coleta de dados pelos sensores e//
      distanciaE = duracaoE/58;             // transformação para centimetros//


       if(distanciaE < 300){
        //Serial.print ("Esquerda");
        Serial.println (distanciaE);
      }
        
     }
   }
   delay(3000);

}
