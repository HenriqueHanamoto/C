#include <Servo.h>



Servo servomotor;

int pinoservo = 6,valormotor = 0;

char entrada;

void setup() 

{

  Serial.begin(9600);

  pinMode(pinoservo, OUTPUT);

  servomotor.attach(pinoservo);

  servomotor.write(0);

}



void loop() 

{

  if(Serial.available() > 0)

  {

    entrada = (char) Serial.read();

    if (entrada == '+')

    {

      valormotor = valormotor + 15;

      servomotor.write(valormotor);

    }

    if (entrada == '-')

    {

      valormotor = valormotor - 15;

      servomotor.write(valormotor);

    }

  }



}
