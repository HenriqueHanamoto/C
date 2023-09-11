/*Código Davi PWM*/
//Variaveis-----------------------------------
int pinoLed = 3;     //pino led
int pinoAnalog = A0; // pino Analogico 
int valor = 0;      // Variavel de manipulação
//Inicialização-------------------------------
void setup() {
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoAnalog, INPUT);
}
//Programa------------------------------------
void loop() {
  valor = analogRead(pinoAnalog);
  analogWrite(pinoLed, (valor/4));
}
