const int trigPin = 9;
const int echoPin = 10 ;
#define led 8

long duration;
int distance;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);

  duration=pulseIn(echoPin, HIGH);

  distance=duration*0.034/2;

  if(distance<50)
  {
    digitalWrite(led,HIGH);
  }
  else
  {digitalWrite(led,LOW);
  }
  

Serial.print("Distance:");//to check the distance in serial monitor
Serial.println(distance);
}
