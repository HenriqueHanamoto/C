#include <MFRC522.h>//biblioteca responsável pela comunicação com o módulo RFID-RC522
#include <SPI.h> //biblioteca para comunicação do barramento SPI
#include <BluetoothSerial.h>
#define SS_PIN    21
#define RST_PIN   26

#define SIZE_BUFFER     27
#define MAX_SIZE_BLOCK  16


MFRC522 mfrc522(SS_PIN, RST_PIN); 

BluetoothSerial ESP_BT; 

int incoming;

int pinRele = 4;

//Variáveis do sistema de segurança
int btn_pin = 23;
int pinTouch = 14;
int pinLed = 5;
int sensorTouch = 0;

unsigned long tempo1= 0;
unsigned long tempo2= 0;

void IRAM_ATTR para(){
  digitalWrite(pinLed, LOW);
}


void setup() {
  Serial.begin(19200);
  SPI.begin();
  ESP_BT.begin("ESP32_Control");

  pinMode (pinRele, OUTPUT);

  pinMode(pinTouch, INPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(btn_pin, INPUT);
  attachInterrupt(btn_pin, para, RISING);
  
  mfrc522.PCD_Init(); 
}

void loop() {
  sos();
   // Aguarda a aproximacao do cartao
  if ( mfrc522.PICC_IsNewCardPresent()) {
    if (mfrc522.PICC_ReadCardSerial()) {
    String tag = "";
    byte letra;
    for (byte i = 0; i < mfrc522.uid.size; i++) 
    {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i], HEX);
      tag.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
      tag.concat(String(mfrc522.uid.uidByte[i], HEX));
    }
    Serial.println();
    Serial.print("Mensagem : ");
    tag.toUpperCase();

  // Testa se o cartao1 foi lido
  if (tag.substring(1) == "C7 83 82 33")
  {
    Serial.print(F("Deu bom!"));
    digitalWrite(pinRele, HIGH);
    delay(2000);
    digitalWrite(pinRele, LOW);
  }else{
    Serial.println(F("Deu ruim!"));
    }
  
  mfrc522.PICC_HaltA();
  mfrc522.PCD_StopCrypto1();

    }
  }

    
   if (ESP_BT.available()) 
  {
    incoming = ESP_BT.read(); //Read what we receive 

  // separate button ID from button value -> button ID is 10, 20, 30, etc, value is 1 or 0
  int button = floor(incoming / 10);
  int value = incoming % 10;
	
  switch (button) {
    case 1:  
      Serial.print("Button 1:"); Serial.println(value);
      digitalWrite(pinRele, value);
      break;
    }
  }
}
void sos() {
  sensorTouch = analogRead(pinTouch);
  Serial.println(sensorTouch);
  delay(250);

  tempo1 = millis();
  while (sensorTouch < 20){
    sensorTouch = analogRead(pinTouch);
    Serial.println(sensorTouch);
    tempo2 = millis();
    if(tempo2 - tempo1 >= 1000){
        digitalWrite(pinLed, HIGH);
    }
  }
}
