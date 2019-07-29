/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Gas Sensor**************
***********29-07-2019**************
*/
 const int buttonPin = 5;
int red_led = 12;
int green_led = 11;
int sensorThres = 400;


void setup() 
  {
    pinMode(2,OUTPUT);
    pinMode(buttonPin, INPUT);
    pinMode(red_led,OUTPUT);
    pinMode(green_led,OUTPUT);
    Serial.begin(9600);
}

void loop() 
{
 
  if(digitalRead(buttonPin)==HIGH)
    {
      digitalWrite(2,HIGH);
      int val = analogRead(A0);
      if (val > sensorThres)
       {
          digitalWrite(red_led, HIGH);
          digitalWrite(green_led, LOW);
          Serial.print("DANGER!!!!  : ");
          Serial.println(val);
          delay(100);
        }

        else
          {
           digitalWrite(red_led, LOW);
           digitalWrite(green_led, HIGH);
           Serial.print("NO Leakage  : ");
           Serial.println(val);
           delay(100);
           }

    digitalWrite(2,LOW);
    }
   else
     {
      digitalWrite(red_led,LOW);
      digitalWrite(green_led,LOW);
      delay(100);
     }
}
      
  
  
