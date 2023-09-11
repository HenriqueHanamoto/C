#include <Servo.h>

Servo servomotor;
int pinoservo = 6,valormotor = 0;
int led = 13;
char entrada;
void setup() 
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pinoservo, OUTPUT);
  servomotor.attach(pinoservo);
  servomotor.write(0);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    entrada = (char) Serial.read();
    if ((entrada == '+') && (valormotor <=165))
    {
      valormotor = valormotor + 15;
      servomotor.write(valormotor);
      Serial.println("motor +15");
    }
    if ((entrada == '-') && (valormotor >=15))
    {
      valormotor = valormotor - 15;
      servomotor.write(valormotor);
      Serial.println("motor -15");
    }
  }

}
