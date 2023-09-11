/*Programa da maquina de salgadinho, com botões de 
0 a 9 e um  Enter, e possui 12 opções de salgadinhos diferentes*/
int bot0=2, bot1=3, bot2=4, bot3=5, bot4=6, bot5=7, bot6=8,bot7=9, bot8=10, bot9=11;
int bEnter=12;
int OP=0, vl=0;
void setup() {
  
  pinMode(bot0, INPUT);
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot4, INPUT);
  pinMode(bot5, INPUT);
  pinMode(bot6, INPUT);
  pinMode(bot7, INPUT);
  pinMode(bot8, INPUT);
  pinMode(bot9, INPUT);
  pinMode(bEnter, INPUT);
   Serial.begin(9600);
  
}

void loop() {
  if (digitalRead(bot1)==1 && digitalRead(bEnter)==1){ //Salgadinho 1
  OP=1;
  Serial.print("opção:  ");
  Serial.println(OP);
  }
  
  if (digitalRead(bot2)==1 && digitalRead(bEnter)==1){ //Salgadinho 2
  OP=2;
  Serial.print("opção:  ");
  Serial.println(OP);
  }
    
   if (digitalRead(bot3)==1 && digitalRead(bEnter)==1){ //Salgadinho 3
   OP=3;
   Serial.print("opção:  ");
   Serial.println(OP);
   }

     if (digitalRead(bot4)==1 && digitalRead(bEnter)==1){ //Salgadinho 4
    OP=4;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if (digitalRead(bot5)==1 && digitalRead(bEnter)==1){ //Salgadinho 5
    OP=5;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if (digitalRead(bot6)==1 && digitalRead(bEnter)==1){ //Salgadinho 6
    OP=6;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if (digitalRead(bot7)==1 && digitalRead(bEnter)==1){ //Salgadinho 7
    OP=7;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if (digitalRead(bot8)==1 && digitalRead(bEnter)==1){ //Salgadinho 8
    OP=8;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if (digitalRead(bot9)==1 && digitalRead(bEnter)==1){ //Salgadinho 9
    OP=9;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

      if ((digitalRead(bot1)==1 && digitalRead(bot0)==1) && digitalRead(bEnter)==1){ //Salgadinho 10
    OP=10;
    Serial.print("opção:  ");
    Serial.println(OP);
    }

     if (digitalRead(bot1)==1) { //Salgadinho 11
      vl=1;
      delay(500);
          if ((vl==1 && digitalRead(bot1)==1) && digitalRead(bEnter)==1){
          OP=11;
          Serial.print("opção:  ");
          Serial.println(OP);
          }
    }

     if ((digitalRead(bot1)==1 && digitalRead(bot2)==1) && digitalRead(bEnter)==1){ //Salgadinho 12
    OP=12;
    Serial.print("opção:  ");
    Serial.println(OP);
    }
  
}
