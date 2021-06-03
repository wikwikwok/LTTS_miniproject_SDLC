const int trig1 = 12;
const int trig2 = 2;
const int echo1 = 13;

const int echo2 = 11;

const int LED1 = 8;
const int LED2 = 6;

int duration1 = 0;
int distance1 = 0;
int duration2 = 0;
int distance2 = 0;



void setup() {
  pinMode(trig1 , OUTPUT);
  pinMode(trig2 , OUTPUT);
  pinMode(echo1 , INPUT);
  
  pinMode(echo2 , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);

   Serial.begin(9600);

}

void loop() {
  digitalWrite(trig1 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig1 , LOW);

  duration1 = pulseIn(echo1 , HIGH);
  distance1 = (duration1/2) / 28.5 ;
  
  digitalWrite(trig2 , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig2 , LOW);
  duration2 = pulseIn(echo2 , HIGH);
  distance2 = (duration2/2) / 28.5 ;
  

   if ( distance1 >= 15 )
  {
    digitalWrite(LED1, HIGH);
    Serial.print(distance1);
    Serial.print("\t\t\t\t\t\t\t\t\t\t");
  }
  else
  {
    digitalWrite(LED1, LOW);
    Serial.print("N/E");
    Serial.print("\t\t\t\t\t\t\t\t\t\t");
  }
   if ( distance2 >= 10 )
  {
    digitalWrite(LED2, HIGH);
    Serial.print(distance2);
    Serial.print("\t\t\t\t\t\t\t\t\t\t");
  }
  else
  {
    digitalWrite(LED2, LOW);
    Serial.print("N/E");
    Serial.print("\t\t\t\t\t\t\t\t\t\t");
  }
  Serial.println("");
}
