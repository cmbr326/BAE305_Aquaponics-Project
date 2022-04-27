# BAE305_Aquaponics.Project

 ![image](https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/Logo%20Complete%20305.png)
 
## Summary:

   The purpose of this project is to have an autonomous aquaponics system which includes an autonomous fish tank and plant growing enviroment. The two systems, the fish tank and the garden, work together by providing and filtering water for eachother. Each of these components is vital to keep a livable enviroment for the fish while also benefiting the plants. 
  

## Design Description: 

   ### Supplies
- Arduino Uno (3)
- Water Pump (3V-5V Submersible Motor Pump)
- Motor (ElectroPeak DC Gear Motor)
- Temperature sensor (DS18B20 Temperature Sensor) 
- Soil Moisture sensor (type?)
- Light bulb
- plug thing? 
- Fish tank
- Gravel 
- Fish
- Fish food 
- Large tote 
- mesh screen
- Wood for suspension system


   ### Wiring Diagrams
Fish Tank Circuits
 ![image](https://user-images.githubusercontent.com/102320028/165436275-fee0916d-5ee1-46fa-840d-867c48a4dd41.png)
Soil Moisture Diagram
 ![image](https://github.com/cmbr326/BAE305_Aquaponics-Project/blob/main/soilMoisture.png)

## Testing Description: 
Testing consisted of checking the sensor readings and the motor/pump functionality. Before soldering the wires and mounting the components to the build, it was important to check that all the components would operate correctly for their given job.   
   - The temperature sensor was tested to ensure that it was picking up the correct temperature and the code was able to display it correctly on the LCD screen.
     - The temperature was initially tested by using heat from a person's hand to see if the temperature displayed was in the correct range and was able to fluctuate appropriately. The temperature sensor was held in a hand for two minutes and the results of the temperature change were displayed on the connected LCD screen. 
   
            
   - The water pump was tested to ensure that it could function correctly submerged and that it was able to pump enough water up to the plants. 
     - The water pump was initially tested by writing a simple code to turn on the pump for five seconds then turn off the pump for five seconds. 
     - The strength of the water pump was then tested by placing the pump into a bin on water and hooking up the  five foot tube and seeing if the water was being pumped up through the entire length of the tube and exiting through the other end of the tubing. 


   - The motor controlling the fish feeder was tested to ensure it could turn the 3-D printed feeder smoothly and that it supplied the correct amount of food. The motor should be able to turn the auger piece inside of the 3D printed feeder. 
     - The motor functionality and code was tested by seeing if it would run for one second every twelve seconds. This is because the final code was to have the motor turn every twelve hours. 
     - The amount of rotation was tested to ensure that the correct amount of food was being dispensed into the tank at each feeding. This was done by changing the time the motor would run.  

   - The soil moisture sensor was tested to ensure it worked properly before it was waterproofed and soldered together. 
     - After wiring the sesnor to a board as the SparkFun diagram recommended, the sensor was placed in dry soil and moist soil to see what the levels were. For dry soil it was close to 0 and moist soil at the level desired was sround 800.
     - When the sensor was ready, it was connected with the pump so that when the level dropped below 800, it would trigger the pump to start pumping water.

## Design Decision Discussion:

   #### Water Pump:
   The water pump operated to move water from the fish tank to the irrigation system of the plant environment. Several design criteria were chosen in the placement and function of the pump. The model of the pump is the 3V-5V Submersible Motor Pump. The pump has a covering around it to ensure that neither large particulate nor fish are pulled into the valve. The pump is attached to the upper portion of the tank by Velcro. This placement allows for both convenient maintenance and minimal strain on the pump to move the water up around 1 foot. The pump operates off of a signal from the soil moisture sensor. 
   
   #### Temperature Sensor:
   The DS18B20 temperature sensor allows the user to know the temperature in Fahrenheit of the tank water. This is important for varying fish and their needs. The temperature is displayed on the screen and informs the user on the temperature in real time. For the conditions and fish in the testing tank it was decided that there was no need for a heater. However, with the sensor it would be easy to monitor a heater if implemented. 
      
   #### Fish Feeder: 
   The Fish feeder consists of 7 individual 3D prints created on an Original Prusa Mini with PLA filament. These pieces include the hopper ( which can hold 20 oz of food) and lid, two supporting joints to support and attach the system, the auger and auger tube, and the connecting joint for the motor. This was joined with tacky glue. The system was then mounted with hot glue to a platform which was tied to the back left corner of the suspension system. This allows the feeder to hang over the tank and turn a decided amount of time, dispensing food into the tank. 
   
   #### Suspension System: 
   The suspension system was made of 2x4 wood to create two legs which could hold up the plant system above the tank. The need was for the center of the system to be open to allow water to drain from the holes of the planter back into the tank when necessary. This was done by creating two U shaped fixtures, then tying them together with another 2x4 on the sides on the platform. The suspension system also operates to hold up the electronics, including the fish feeder, Arduino, and screen display
   
   #### Soil Moisture Sensor
   The circuit for the sensor was mounted to the font of the table for the plant bed so it could reach the inside of the bed, while also being near the board for the pump so it could send the moisture readings to the pump. The sensor was waterproofed with hot glue to ensure water wouldn't ruin it. Based on the recommended soil moisture for the plants, lettuce and basil, the moisture level 800 was determined to be the minimum level. 
        
## Testing results:
   
   #### Water Pump:
   The pump was able to turn on for five seconds and turn off for five seconds. The pump was also successful in pumping water through the entire five feet of tubing needed. This was enough "data" to ensure it would work properly for this use. 
   #### Temperature Sensor:
   The temperature read in the room was 70.2 Degrees Fahrenheit. THe temperature reached after two minutes of holding the sensor in a hand was 98.5 Degrees Fahrenheit.
   #### Fish Feeder:
   The fish feeder output 2 ounces of food when it was set to run for one second. The feeder output 1 ounce of food when run for half a second. The feeder output 0.5 ounces of food when it ran for a quarter of a second. The feeder holds approximately 30 ounces of standard goldfish pellets.
   #### Soil Moisture Sensor:
   The moisture was around 880 when we first watered the plants before hooking up the pump system. This was the desirable moisture level. When the sensor was removed from the soil, the moisture level dropped which then triggered the pump.

## Test result Discussion:
The testing completed to test the functionality of the compenents does not require exact data outputs. This is because the testing done on the temperature sensor and the water pump were done just to ensure that they could read values and turn on and off. 
   #### Water Pump:
   The testing done was functionality testing so no exact data outputs are needed. The volumetric amount of water does not need to be measured because the water is based on soil moisture and not a calculation based on water quantity. 
   #### Temperature Sensor:
   The temperature sensor read appropriate values based on room temperature and human hand temperature.
   #### Fish Feeder 
   After implementation of the testing tank, the feeder was initially over feeding. Using guppies, the decision was to crush food pellets into smaller pieces and insert those into the hopper. This allowed more particulate to gather in the auger than previously tested, so there was a change required in the turning time per feeding. Moving forward with implementation to other fish and food types, the capabilities of the auger should be considered. If larger food is used, it is necessary to compare the amount leaving the auger per turn. For the mentioned food and feeding needs, it was ultimately decided the quarter of a second motor run was sufficient in providing enough food to the fish without overfeeding. When the feeder is fully stocked, it will run for approximately 40 cycles of feeding, which is equal to 20 days.
   #### Soil Moisture Sensor
   The moisture sensor was reading appropriated values around 880. The minimum moisture level of 800 was enugh for the plants, while not taking too much water from the fish tank. 
