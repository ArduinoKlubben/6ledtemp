int sensorPin = 0; 

void setup()
{
  Serial.begin(9600);  
    pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}
 
void loop()                     
{
 int reading = analogRead(sensorPin);  
 
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 

 Serial.print(voltage); Serial.println(" volts");
 
 
 float temperatureC = (voltage - 0.5) * 100 ; 
 Serial.print(temperatureC); Serial.println(" degrees C");
 

 
 delay(1000);

 if (temperatureC > 25) {
                              digitalWrite(2, LOW);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
              
              }
     
   if  (temperatureC > 27) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             
       if  (temperatureC > 29) {
                     
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }            
      if  (temperatureC > 31) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }           
      if  (temperatureC > 33) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }           
      if  (temperatureC > 35) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, LOW);
    
      }            
      if  (temperatureC > 37) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);
    
      }

             if (temperatureC > 39) {

                              digitalWrite(8, LOW);

                              delay(250);
                              
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);

                               delay(250);
    
     }
}



 

