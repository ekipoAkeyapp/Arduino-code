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

   if(keyVal == 1023){
    tone(8, notes[0]);
    } 
   else if(keyVal >= 990 && keyVal <= 1010){
     tone(8, notes[1]);
    }
   else if(keyVal >= 505 && keyVal <= 515){
     tone(8, notes[2]);
    }
   else if(keyVal >= 800 && keyVal <= 900){
     tone(8, notes[3]);
    }
   else if(keyVal >= 5 && keyVal <= 15){
     tone(8, notes[4]);
    }
   else if(keyVal >= 35 && keyVal <= 50){
     tone(8, notes[5]);
    }
   else{
     noTone(8);
    }
}
