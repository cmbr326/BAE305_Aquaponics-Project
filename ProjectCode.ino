int pump=7;
int feeder=6;
int t=0;
int block=0;

int switchPinP = 2;
int switchPinF = 1;

#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 5
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
 float Celcius=0;
 float Fahrenheit=0;
 
#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
pinMode(pump, OUTPUT);
 lcd.begin(16, 2); 
 lcd.clear();      
lcd.setCursor(0, 0);                      
lcd.print("Degrees F: ");                

pinMode(feeder, OUTPUT);

Serial.begin(9600);
sensors.begin();

pinMode(switchPinP, INPUT_PULLUP);
pinMode(switchPinF, INPUT_PULLUP);
}
void loop() {

//lcd.clear();  
lcd.setCursor(11,0);                            
lcd.print(Fahrenheit);      

t=millis()/3600000;
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

sensors.requestTemperatures(); 
Celcius=sensors.getTempCByIndex(0);
Fahrenheit=sensors.toFahrenheit(Celcius);
Serial.print(" C  ");
Serial.print(Celcius);
Serial.print(" F  ");
Serial.println(Fahrenheit);
delay(1000);
}
