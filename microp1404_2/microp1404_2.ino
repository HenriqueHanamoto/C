/*
Programa 01
Ligar led
Turma A 
*/
#define ledVermelho 2
#define ledAmarelo 4
#define ledVerde 7

void setup() // Função que inicializa o meu programa. Lê apenas uma vez.
{ 
    pinMode(ledVermelho, OUTPUT); //Defini o pino 2 como uma saida Digital.    
    pinMode(ledAmarelo, OUTPUT); //Defini o pino 4 como uma saida Digital.                           
    pinMode(ledVerde, OUTPUT); //Defini o pino 7 como uma saida Digital.                           


}// Fim do setup

void loop() //Inicio do loop. Se repete sempre tudo oq está dentro, na velocidade do processador, ou sinal de clok
{
  digitalWrite(ledVermelho, HIGH);//"escreva no pino(digitalwrite)", 2 sinal alto(high).
  delay(3000);//atraso em milisegundos.
  digitalWrite(ledVermelho, LOW);//"escreva no pino(digitalwrite)", 2 sinal baixo (LOW).
  delay(3000);//atraso em milisegundos.
  
  digitalWrite(ledAmarelo, HIGH);//"escreva no pino(digitalwrite)", 4 sinal alto(high).
  delay(1000);//atraso em milisegundos.
  digitalWrite(ledAmarelo, LOW);//"escreva no pino(digitalwrite)", 4 sinal baixo (LOW).
  delay(1000);//atraso em milisegundos.
  
  digitalWrite(ledVerde, HIGH);//"escreva no pino(digitalwrite)", 7 sinal alto(high).
  delay(2000);//atraso em milisegundos.
  digitalWrite(ledVerde, LOW);//"escreva no pino(digitalwrite)", 7 sinal baixo (LOW).
  delay(2000);//atraso em milisegundos.

  if() {
    
  }
  
} //Fim do loop
