int notes[] = {262,294,330,349,391,440};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // begin serial communication
  
}

void loop() {
  // put your main code here, to run repeatedly:
   int keyVal = analogRead(A0);
   //Serial.println(keyVal);

   if(keyVal >= 660 && keyVal <= 720){
    tone(8, notes[0]);
    Serial.println(1);
    } 
   else if(keyVal >= 100 && keyVal <= 150){
     tone(8, notes[1]);
     Serial.println(2);
    }
   else if(keyVal >= 300 && keyVal <= 390){
     tone(8, notes[2]);
     Serial.println(3);
    }
   else if(keyVal >= 550 && keyVal <= 590){
     tone(8, notes[3]);
     Serial.println(4);
    }
   else if(keyVal >= 65 && keyVal <= 90){
     tone(8, notes[4]);
     Serial.println(5);
    }
   else if(keyVal >= 15 && keyVal <= 50){
     tone(8, notes[5]);
     Serial.println(6);
    }
   else{
     noTone(8);
    }
}
