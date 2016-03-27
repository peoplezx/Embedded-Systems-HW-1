int led7 = 9;
int led6 = 8;
int led5 = 7;
int led4 = 6;
int led3 = 5;
int led2 = 4;
int led1 = 3;
int led0 = 2;
int inByte = 0;    

void setup() 
  { Serial.begin(9600);
    pinMode(led0, OUTPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
  }

void loop()
  { if (Serial.available() > 0)
    { inByte = Serial.read();
      if(inByte == '1') digitalWrite(led0, LOW);
      if(inByte == '2') digitalWrite(led0, HIGH);

      if(inByte == '3') digitalWrite(led1, LOW);
      if(inByte == '4') digitalWrite(led1, HIGH);

      if(inByte == '5') digitalWrite(led2, LOW);
      if(inByte == '6') digitalWrite(led2, HIGH);

      if(inByte == '7') digitalWrite(led3, LOW);
      if(inByte == '8') digitalWrite(led3, HIGH);

      if(inByte == '9') digitalWrite(led4, LOW);
      if(inByte == '0') digitalWrite(led4, HIGH);

      if(inByte == 'a') digitalWrite(led5, LOW);
      if(inByte == 'b') digitalWrite(led5, HIGH);

      if(inByte == 'c') digitalWrite(led6, LOW);
      if(inByte == 'd') digitalWrite(led6, HIGH);
      
      if(inByte == 'e') digitalWrite(led7, LOW);
      if(inByte == 'f') digitalWrite(led7, HIGH);
    }
  }

