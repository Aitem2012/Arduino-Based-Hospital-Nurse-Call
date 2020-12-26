const int buzzer = 14;
const int button1 = 2;     // the number of the pushbutton pin
const int led1 =  3;      // the number of the LED pin
const int button2 = 4;
const int led2 = 5;
const int button3 = 6;
const int led3 = 7;
const int button4 = 8;
const int led4 = 9;
const int button5 = 10;
const int led5 = 11;
const int button6 = 12;
const int led6 = 13;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;





void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button2, INPUT);
  pinMode(led3, OUTPUT);
  pinMode(button3, INPUT);
  pinMode(led4, OUTPUT);
  pinMode(button4, INPUT);
  pinMode(led5, OUTPUT);
  pinMode(button5, INPUT);
  pinMode(led6, OUTPUT);
  pinMode(button6, INPUT);
  digitalWrite(led6, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
  noTone(buzzer);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);
  buttonState6 = digitalRead(button6);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
    // turn LED on:
    digitalWrite(led1, HIGH);
    buzze();
    buttonState =0;
  }
  
  if (buttonState2 == HIGH){
    
    digitalWrite(led2, HIGH);
    buzze();
    buttonState2 =0;
  }

  if (buttonState3 == HIGH) {
    
    // turn LED on:
    digitalWrite(led3, HIGH);
    buzze();
    buttonState3 =0;
  }
  
  if (buttonState4 == HIGH) {
    
    // turn LED on:
    digitalWrite(led4, HIGH);
    buzze();
    buttonState4 =0;
  }
  if (buttonState5 == HIGH) {
    
    // turn LED on:
    digitalWrite(led5, HIGH);
    buzze();
    buttonState5 =0;
  }
    if (buttonState6 == HIGH) {
    
    // turn LED on:
    digitalWrite(led6, HIGH);
    buzze();
    buttonState6 =0;
  }
  else {
    // turn LED off:
    noTone(buzzer);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
  }
  //Serial.write(buzzer);
}

void buzze(){
  tone(buzzer, 3000);
  delay(5000);
  noTone(buzzer);
}
