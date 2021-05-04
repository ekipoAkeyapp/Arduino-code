// Los keyvalues hay que ajustarlos mirando el valor de cada boton en el serial monitor

int notes[] = {262,294,330,349,391,440};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // begin serial communication
  
}

void loop() {
  // put your main code here, to run repeatedly:
   int keyVal = analogRead(A0);
   Serial.println(keyVal);

   if(keyVal >= 677 && keyVal <= 690){
    tone(8, notes[0]);
    } 
   else if(keyVal >= 650 && keyVal <= 675){
     tone(8, notes[1]);
    }
   else if(keyVal >= 330 && keyVal <= 350){
     tone(8, notes[2]);
    }
   else if(keyVal >= 550 && keyVal <= 570){
     tone(8, notes[3]);
    }
   else if(keyVal >= 1 && keyVal <= 10){
     tone(8, notes[4]);
    }
   else if(keyVal >= 15 && keyVal <= 40){
     tone(8, notes[5]);
    }
   else{
     noTone(8);
    }
}
