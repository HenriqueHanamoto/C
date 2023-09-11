int ledV=10;
int ledA=9;
int ledVd=8;
int bot=12;
int entradabot = LOW;
void setup()
{
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledVd, OUTPUT);
  pinMode(bot,INPUT);
}

void loop()
{
  entradabot = digitalRead(bot);
  if (entradabot==LOW)
  {
  digitalWrite(ledV, HIGH);
    digitalWrite(ledA, LOW);
    digitalWrite(ledVd, LOW);
  }
  if (entradabot==HIGH)
  {
  digitalWrite(ledV, HIGH);
    digitalWrite(ledA, LOW);
    digitalWrite(ledVd, LOW);
    delay(6000);
    
    digitalWrite(ledV, LOW);
    digitalWrite(ledA, HIGH);
    digitalWrite(ledVd, LOW);
    delay(4000);
    
    digitalWrite(ledV, LOW);
    digitalWrite(ledA, LOW);
    digitalWrite(ledVd, HIGH);
    delay(6000);
  }
 
    
}
