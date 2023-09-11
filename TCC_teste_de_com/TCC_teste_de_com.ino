/*Código para o projeto integrador*/

char bitRecebido = 0;

void setup() 
{
  Serial.begin(9600);
 
}

void loop() 
{
//ENVIO-------------------
  Serial.println("m");
  delay(20000);
//----------------------------
//RECEBAA--------------------------------
  
bitRecebido = (char) Serial.read();
     if (bitRecebido == 'a'){ 
      
        Serial.println("Chegou:  ");
        Serial.println (bitRecebido);
        
     }
//---------------------------------------------
}
