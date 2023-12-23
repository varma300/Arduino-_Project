char Incoming_F_value = 0;
char Incoming_B_value = 0;
char Incoming_L_value = 0;
char Incoming_R_value = 0;
void setup(){
 Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
}

void loop (){
  if(Serial.available() > 0){
    Incoming_value = Serial.read();

    if(Incoming_value == 'F')
      digitalWrite(13,HIGH);
    else if(Incoming_value == 'B')
      digitalWrite(12,HIGH);
    else if(Incoming_value == 'R')
      digitalWrite(11,HIGH);
    else if(Incoming_value == 'R')
      digitalWrite(10,HIGH);
    else{
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
    }
  
  }
}