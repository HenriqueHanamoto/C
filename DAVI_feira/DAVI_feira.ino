//VARIAVEIS-----------------------------------------------------
int trig = 8;
int echo = 7;
int pinoLimpa=2;
int pinoContinue=3;
int cont=0; 
long duracao = 0;
long distance = 0;

//INICIALIZÇÃO---------------------------------------------------
void setup()
{
  Serial.begin(9600);
  pinMode(pinoLimpa, INPUT_PULLUP);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  attachInterrupt(digitalPinToInterrupt(pinoLimpa), Clear, CHANGE);
  attachInterrupt(digitalPinToInterrupt(pinoContinue), Continue, CHANGE);
  
}

//PROGRAMA--------------------------------------------------------
void loop(){
  digitalWrite(trig, LOW);
  delayMicroseconds(10); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  
  duracao = pulseIn(echo, HIGH);
  distance = duracao/58;
  Serial.print("DISTANCIA EM CM: ");
  Serial.println(distance);
  delay(250);
  
    
}

//FUNÇÃO=============================================================
void Clear(){
   distance = 0;
    Serial.println(distance);
    if(distance == 0){
        while (btn1 != HIGH)
        {
           delay(500);
           Serial.println(distance);
           digitalRead(btn1);
        }        
    }
}

void Continue(){
    return 0;
}
