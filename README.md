# BAE305_Aquaponics.Project

 ![image](https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/Logo%20Complete%20305.png)
 
## Summary:

   The purpose of this project is to have an autonomous aquaponics system which includes an autonomous fish tank and plant growing environment. The two systems, the fish tank and the garden, work together by providing and filtering water for each other. The water from the fish tank is pumped into the garden when the soil moisture drops below a certain level, and the excess water from the garden precipitates back into the fish tank. Each of these components is vital to keep a livable environment for the fish while also benefiting the plants. The system comes equipped with a grow lamp to give the plants the light that they need on a scheduled basis. Each sensor in the aquaponics system includes displays for the user to properly monitor the vital aspects of the plants and fish's environment.
  
 <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/IMG_6509.jpg" width="500" height="500">
 
## Design Description: 

  <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/IMG_6506.jpg" width="500" height="500">
   
   ### Supplies
- Arduino Uno (3)
- Water Pump (3V-5V Submersible Motor Pump)
- Motor (ElectroPeak DC Gear Motor)
- Temperature sensor (DS18B20 Temperature Sensor) 
- Soil Moisture sensor (SparkFun Soil Moisure Sensor with screw terminals SEN-13637)
- Light bulb
- Mobile outlet
- Fish tank
- Gravel 
- Fish
- Fish food 
- Large tote 
- mesh screen
- Wood for suspension system
- Tubing 

   ### Wiring Diagrams
Fish Tank Circuits

<img src="https://user-images.githubusercontent.com/102320028/165436275-fee0916d-5ee1-46fa-840d-867c48a4dd41.png" width="600" height="300">
  
Soil Moisture Diagram

 <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/soilMoisture.png" width="500" height="400">
 
Soil Moisture Sensor and Pump 

 <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/circuit.jpg" width="600" height="300">
 
 Temperature and Humidity Sensor
 
 <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/circuit2.jpg" width="600" height="300">
 
## Testing Description: 
Testing consisted of checking the sensor readings and the motor/pump functionality. Before soldering the wires and mounting the components to the build, it was important to check that all the components would operate correctly for their given job.   
   - The temperature sensor for the fish tank was tested to ensure that it was picking up the correct temperature and the code was able to display it correctly on the LCD screen.
     - The temperature was initially tested by using heat from a person's hand to see if the temperature displayed was in the correct range and was able to fluctuate appropriately. The temperature sensor was held in a hand for two minutes and the results of the temperature change were displayed on the connected LCD screen. 
   
            
   - The water pump was tested to ensure that it could function correctly submerged and that it was able to pump enough water up to the plants. 
     - The water pump was initially tested by writing a simple code to turn on the pump for five seconds then turn off the pump for five seconds. 
     - The strength of the water pump was then tested by placing the pump into a bin on water and hooking up the  five foot tube and seeing if the water was being pumped up through the entire length of the tube and exiting through the other end of the tubing. 


   - The motor controlling the fish feeder was tested to ensure it could turn the 3-D printed feeder smoothly and that it supplied the correct amount of food. The motor should be able to turn the auger piece inside of the 3D printed feeder. 
     - The motor functionality and code was tested by seeing if it would run for one second every twelve seconds. This is because the final code was to have the motor turn every twelve hours. 
     - The amount of rotation was tested to ensure that the correct amount of food was being dispensed into the tank at each feeding. This was done by changing the time the motor would run.  

   - The soil moisture sensor was tested to ensure it worked properly before it was waterproofed and soldered together. 
     - After wiring the sesnor to a board as the SparkFun diagram recommended, the sensor was placed in dry soil and moist soil to see what the levels were. For dry soil it was close to 0 and moist soil at the level desired was sround 800.
     - When the sensor was ready, it was placed in the soil and connected with the pump so that when the level dropped below 800, it would trigger the pump to start pumping water.
     - The sensor was also connected to an LCD screen so that the moisture level was displayed.

   - The lamp was converted from DC to AC to control when the light was on.
     -  For the lamp, we first tested a cycle of turning on for 5 seconds and off for 5 seconds, which was a success. We then changed the code so that it would be on and off for the proper amount of time for the plants.

   - The temperature and humididty sensor was tested to ensure it worked properly before it was attached.
     -  A DHT 20 was originally tested to measure temperature and humidity, through testing it would return ‘failure to read’ messages. The DHT 20 would be replaced by a DHT 22 which would return readings that would were found to be accurate in comparison to a standard thermometer’s readings.


## Design Decision Discussion:

   #### Water Pump:
   The water pump operated to move water from the fish tank to the irrigation system of the plant environment. Several design criteria were chosen in the placement and function of the pump. The model of the pump is the 3V-5V Submersible Motor Pump. The pump has a covering around it to ensure that neither large particulate nor fish are pulled into the valve. The pump is attached to the upper portion of the tank by Velcro. This placement allows for both convenient maintenance and minimal strain on the pump to move the water up around 1 foot. The pump operates off of a signal from the soil moisture sensor. 
   
   #### Temperature Sensor:
   The DS18B20 temperature sensor allows the user to know the temperature in Fahrenheit of the tank water. This is important for varying fish and their needs. The temperature is displayed on the screen and informs the user on the temperature in real time. For the conditions and fish in the testing tank it was decided that there was no need for a heater. However, with the sensor it would be easy to monitor a heater if implemented.
  
   #### Fish Feeder: 
   The Fish feeder consists of 7 individual 3D prints created on an Original Prusa Mini with PLA filament. These pieces include the hopper ( which can hold 20 oz of food) and lid, two supporting joints to support and attach the system, the auger and auger tube, and the connecting joint for the motor. This was joined with tacky glue. The motor selected to tuen the auger is the ElectroPeak DC Gear Motor. The system was then mounted with hot glue to a platform which was tied to the back left corner of the suspension system. This allows the feeder to hang over the tank and turn a decided amount of time, dispensing food directly into the tank. 
   
   ![image](https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/render%20collection.png)
   
   #### Suspension System: 
   The suspension system was made of 2x4 wood to create two legs which could hold up the plant system above the tank. The need was for the center of the system to be open to allow water to drain from the holes of the planter back into the tank when necessary. This was done by creating two U shaped fixtures, then tying them together with another 2x4 on the sides on the platform. The suspension system also operates to hold up the electronics, including the fish feeder, Arduino, and screen display
   
   #### Soil Moisture Sensor:
   The circuit for the sensor was mounted to the font of the table for the plant bed so it could reach the inside of the bed, while also being near the board for the pump so it could send the moisture readings to the pump. The sensor was waterproofed with hot glue to ensure water wouldn't ruin it. Based on the recommended soil moisture for the plants, lettuce and basil, the moisture level 800 was determined to be the minimum level. If the level drops below, the pump is signaled. The power supply is a pack of batteries that is also attached to the stand. So that the moisture level coud be monitored,it was connected to an LCD screen. It will not show values under 800 because the pump is triggered and draws too much power, causing the screen to go blank. However, this isn't a problem since the value is not needed below 800. 
   
   #### Plant Bed:
   A clear plastic tote was used to hold the garden. Holes of about a ¼ in diameter were drilled about 2 in apart in the center region of the bottom of the tote.  Layers of fabric and a metal screen were placed at the bottom to keep dirt from falling through the holes. The rest of the tote was filled with dirt and plants on top. A tube was connected to the water pump and holes were put about 2 inches apart along the tube. The tube was snaked around the top of the garden so that water would be evenly dispersed.
   
   #### Plant Lamp:
   The automatic grow light was made using an extension cord, AC outlet, relay, Arduino, and wires. The circuitry can be built by following  [This Tutorial](https://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/). The grow light was hung off a PVC pipe connected to the stand so that it would be well-positioned to give all plants adequate light.
   
   #### Temperature and Humidity Sensor:
 A humidity and temperature sensor was researched and chosen. The circuitry of the LCD and sensor can be seen in the circuit section above. The Arduino was anchored to the base of the stand for display of results and the sensor is fashioned by zip ties on the inside wall of the tote to measure the humidity and temperature of the plants environment.
 
## Testing results:
   
   #### Water Pump:
   The pump was able to turn on for five seconds and turn off for five seconds. The pump was also successful in pumping water through the entire five feet of tubing needed. This was enough "data" to ensure it would work properly for this use. 
   #### Temperature Sensor:
   The temperature read in the room was 70.2 Degrees Fahrenheit. THe temperature reached after two minutes of holding the sensor in a hand was 98.5 Degrees Fahrenheit.
   
   <img src="https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/fishfeeder.jpg" width="500" height="400">
   
   #### Fish Feeder:
   The fish feeder output 2 ounces of food when it was set to run for one second. The feeder output 1 ounce of food when run for half a second. The feeder output 0.5 ounces of food when it ran for a quarter of a second. The feeder holds approximately 30 ounces of standard goldfish pellets.
   #### Soil Moisture Sensor:
   The moisture was around 880 when we first watered the plants before hooking up the pump system. This was the desirable moisture level. When the sensor was removed from the soil, the moisture level dropped which then successfully triggered the pump.
   
   #### Plant Lamp:
   The lamp is able to turn on for 10 hours and off for 14 hours as long as it is plugged into the wall. 
   
   #### Temperature and Humidity Sensor:
   The DHT sensor constantly outputs temperature in Fahrenheit and humidity on the display. If powered by a laptop, temperature in Celsius as well as the heat index in Celsius and Fahrenheit is available through the Arduino code.
The lamp is able to turn on for 10 hours and off for 14 hours as long as it is plugged into the wall. 


## Test result Discussion:
The testing completed to test the functionality of the compenents does not require exact data outputs. This is because the testing done on the temperature sensor and the water pump were done just to ensure that they could read values and turn on and off. 
   #### Water Pump:
   The testing done was functionality testing so no exact data outputs are needed. The volumetric amount of water does not need to be measured because the water is based on soil moisture and not a calculation based on water quantity. Testing done to ensure that the pump was strong enough to meet the needs of the system showed that it well exceeded possible limitations. 
   #### Temperature Sensor:
   The temperature sensor read appropriate values based on room temperature and human hand temperature. Testing resulted in the decision to not include a heater in the system. This may need to altered for alternate implementation tactics. 
   #### Fish Feeder:
   After implementation of the testing tank, the feeder was initially over feeding. Using guppies, the decision was to crush food pellets into smaller pieces and insert those into the hopper. This allowed more particulate to gather in the auger than previously tested, so there was a change required in the turning time per feeding. Moving forward with implementation to other fish and food types, the capabilities of the auger should be considered. If larger food is used, it is necessary to compare the amount leaving the auger per turn. For the mentioned food and feeding needs, it was ultimately decided the quarter of a second motor run was sufficient in providing enough food to the fish without overfeeding. When the feeder is fully stocked, it will run for approximately 40 cycles of feeding, which is equal to 20 days.
   #### Soil Moisture Sensor:
   The moisture sensor was reading appropriate values, around 880. The minimum moisture level of 800 was enough for the plants, while not taking too much water from the fish tank. When the sensor was removed from the soil and exposed to the air, it detects a value lower than 800 and triggers the pump. 
   #### Plant Lamp:

   #### Temperature and Humidity Sensor:
   The readings are accurate but the sensor is slow to react to extreme changes in temperature. Due to the size of the LCD only two readings will fit on the screen. While the sensor measures humidity and both temperature and heat index in Fahrenheit and Celcius, only humidity and temperature (Fahrenheit) are displayed since they are most relevant to the system.

