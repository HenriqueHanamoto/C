/*aula X- operador AND ou E= && - OR ou OU= ||*/


#define ledVermelho 8
#define botao00 12
#define botao01 13

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(botao00, INPUT);
  pinMode(botao01, INPUT);
}

void loop() {
  if (digitalRead(botao00)==1 || digitalRead(botao01)==1){
      digitalWrite(ledVermelho, HIGH);
      delay(4000);
      digitalWrite (ledVermelho, LOW);
    }
}
