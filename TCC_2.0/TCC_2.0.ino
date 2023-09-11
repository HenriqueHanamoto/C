
int trigF = 8;
int echoF = 7;
long duracaoF = 0;
long distanciaF = 0;
int trigD = 9;
int echoD = 10;
long duracaoD = 0;
long distanciaD = 0;
int trigE = 11;
int echoE = 12;
long duracaoE = 0;
long distanciaE = 0;
void setup() 

{

  Serial.begin(9600);
  pinMode(trigF, OUTPUT);
  pinMode(echoF, INPUT);
  pinMode(trigD, OUTPUT);
  pinMode(echoD, INPUT);
  pinMode(trigE, OUTPUT);
  pinMode(echoE, INPUT);

}


void loop() 
{
  //Sensor Frontal//
      digitalWrite(trigF, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigF, LOW);
 

      duracaoF = pulseIn(echoF, HIGH);
      distanciaF = duracaoF/58;

   
        Serial.print("Distância em cm:  ");
        delay(300);
        Serial.println(distanciaF);
        
//sensor da Direita//
      digitalWrite(trigD, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigD, LOW);
 

      duracaoD = pulseIn(echoD, HIGH);
      distanciaD = duracaoD/58;
      

        Serial.print("Distância em cm:  ");
        delay(300);
        Serial.println(distanciaD);

//Sensor Esquerda//
      digitalWrite(trigE, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigE, LOW);
 

      duracaoE = pulseIn(echoE, HIGH);
      distanciaE = duracaoE/58;
        Serial.print("Distância em cm:  ");
        delay(300);
        Serial.println(distanciaE);
  
     

  

}
