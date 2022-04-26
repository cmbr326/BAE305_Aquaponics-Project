# BAE305_Aquaponics.Project


## Summary:

   The purpose of this project is to have an autonomous aquaponics system which includes an autonomous fish tank and plant growing enviroment. The two systems, the fish tank and the garden, work together by providing and filtering water for eachother. Each of these components is vital to keep a livable enviroment for the fish while also benefiting the plants. 
  

## Design Description: 

   ### Supplies
- Arduino Uno (3)
- Water Pump (type?)
- Motor (Type?)
- Temperature sensor (type?) 
- Soil Moisture sensor (type?)
- Light bulb
- plug thing? 
- Fish tank
- Gravel 
- Fish
- Fish food 
- Large tote 
- mesh screen


   ### Wiring Diagrams
 

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



## Design Decision Discussion:



## Testing results:
   
   #### Water Pump:
   The pump was able to turn on for five seconds and turn off for five seconds. The pump was also successful in pumping water through the entire five feet of tubing needed. This was enough "data" to ensure it would work properly for this use. 
   #### Temperature Sensor:
   The temperature read in the room was 70.2 Degrees Fahrenheit. THe temperature reached after two minutes of holding the sensor in a hand was 98.5 Degrees Fahrenheit.
   #### Fish Feeder:
   The fish feeder output XXXX of food when it was set to run for one second. The feeder output XXXX of food when run for half a second. The feeder output XXXX of food when it ran for a quarter of a second. 



## Test result Discussion:
The testing completed to test the functionality of the compenents does not require exact data outputs. This is because the testing done on the temperature sensor and the water pump were done just to ensure that they could read values and turn on and off. 
   #### Water Pump:
   The testing done was functionality testing so no exact data outputs are needed. The volumetric amount of water does not need to be measured because the water is based on soil moisture and not a calculation based on water quantity. 
   #### Temperature Sensor:
   The temperature sensor read appropriate values based on room temperature and human hand temperature.
   #### Fish Feeder 
   Based on the recommended amount of food for the small guppies, the quarter of a second motor run was sufficient in providing enough food to the fish without overfeeding. 

