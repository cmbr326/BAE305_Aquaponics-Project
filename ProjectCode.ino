int pump=7; //initialize pump, feeder, time, and block variables
int feeder=6;
int t=0;    
int block=0;

#include <OneWire.h>  //initialize temperature sensor
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 5
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
 float Celcius=0;
 float Fahrenheit=0;
 
#include <LiquidCrystal.h> //initialize LCD
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {   
pinMode(pump, OUTPUT);  //set motor pins as outputs
pinMode(feeder, OUTPUT);
 
lcd.begin(16, 2); //setup LCD
lcd.clear();      
lcd.setCursor(0, 0);                      
lcd.print("Degrees F: ");                

Serial.begin(9600); //start serial monitor
sensors.begin();
}
void loop() {  
lcd.setCursor(11,0);    //print temperature to LCD                        
lcd.print(Fahrenheit);      

t=millis()/3600000; //start timer function for feeder
Serial.println(t);
Serial.println(block);
if (t%12==0){
  if (block==0) {
    Serial.println("Feeder is running");
    digitalWrite(feeder,HIGH);
    delay(250);
    digitalWrite(feeder,LOW); 
    block=1;
  }
}
if (t%12==1){
  block=0;
}

sensors.requestTemperatures();  //read temperature and print to serial monitor
Celcius=sensors.getTempCByIndex(0);
Fahrenheit=sensors.toFahrenheit(Celcius);
Serial.print(" C  ");
Serial.print(Celcius);
Serial.print(" F  ");
Serial.println(Fahrenheit);
delay(1000);
}
