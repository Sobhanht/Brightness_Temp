# LED Light and Temperature

This project is about how to increase or decrease the LED light by increasing or decreasing temprature.
List of libraries using in this project :
"DFRobot_SHT20.h"
If the Temperature going ahead of 28 c , the LED powerd on and its light increases by increasing the Temperature.

Hint :
Hint1 : DFRobot_SHT20 sht20(&Wire, SHT20_I2C_ADDR); 

1- Connecting to the SHT20 sensor via I2C.
2- Allows reading of temperature and humidity data.

<img width="373" height="110" alt="image" src="https://github.com/user-attachments/assets/1d95865b-1877-4e47-b8c3-79b4bf621309" />

After executing this line, you can use sht20 in the setup() and loop() functions to call functions related to the SHT20 sensor, such as sht20.initSHT20() to initialize the sensor or sht20.readTemperature() to read the temperature ; for examle :
<img width="360" height="86" alt="image" src="https://github.com/user-attachments/assets/b029ddbc-6bda-40fc-97e8-e5aa8a80b15c" />

Hint2 :
Maximum brightness of LED analog value = 255 
Minimum brightness of LED analog value = 1
Maximum temperature value received from the sensor = 48
Minimum temperature value received from the sensor = 28
<img width="429" height="125" alt="image" src="https://github.com/user-attachments/assets/994fd7b5-dd2f-455f-bb7f-ac2efd0016ed" />


