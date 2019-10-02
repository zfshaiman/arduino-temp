// from https://www.brainy-bits.com/dht11-tutorial/
// DHT11 library can be found at the above link

#include "dht.h"
#define dht_apin A0 // DHT11 sensor should be connected to an analog sensor, in this example it is connected to A0
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);  // Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);  // Wait before accessing Sensor
 
} // end of the "setup()" function
 
void loop(){
  // Start monitoring 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(10000); // Wait 10 seconds before accessing sensor again.
 
  // According to spec sheet, fastest should be once every two seconds.
 
} // end loop() 
