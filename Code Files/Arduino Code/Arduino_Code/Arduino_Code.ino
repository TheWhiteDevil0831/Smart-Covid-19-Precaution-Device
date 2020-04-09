/* Arduino Code For Ultrasonic Sensor and LM35 Temperature Sensor  */


int trigPin=9;                      /*  pin initializations  */
int echoPin=10;
int val;
int tempPin = 0;
void setup() {
  Serial.begin (9600);
  pinMode (trigPin,OUTPUT);
  pinMode (echoPin,INPUT);
 

}

void loop() {
  long duration,distance;
  digitalWrite (trigPin,HIGH);
  delayMicroseconds (1000);
  digitalWrite (trigPin,LOW);
  duration= pulseIn(echoPin,HIGH);
  distance=(duration*0.034)/2;
  if(distance<10){                                          /*  Condition for distance  */
                                   
      Serial.println ("Someone is outside your door. Please tell him to clean his hands with sanitizer kept there and touch the temperature sensor");    /*  1st Alert Whatsapp Message  */
  }

  
      val = analogRead(tempPin);
      float mv = ( val/1023.0)*5000;
      float cel = mv/10;
      float farh = (cel*9)/5 + 32;
      /*Serial.print("TEMPRATURE = ");              If temperature needed in Celsius
      Serial.print(cel);
      Serial.print("*C");
      Serial.println();*/
      if(farh > 100){
            Serial.print("The person`s body temperature is not normal He has Fever ");       /* 2nd Alert Whatsapp Message  */
            Serial.print("TEMPRATURE = ");
            Serial.print(farh);
            Serial.print("*F");
            Serial.println();
  }



delay(1000);
}
  

