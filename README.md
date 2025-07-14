# LED Light and Temperature

This project is about how to increase or decrease the LED light by increasing or decreasing temprature. </br>

List of libraries using in this project :</br>
"DFRobot_SHT20.h"</br>
</br>
</br>
If the Temperature going ahead of 28 c , the LED powerd on and its light increases by increasing the Temperature.</br>
</br>
</br> 
</br>
# *Hints :</br>
</br>
Hint1 : DFRobot_SHT20 sht20(&Wire, SHT20_I2C_ADDR); </br>

1- Connecting to the SHT20 sensor via I2C.</br>
2- Allows reading of temperature and humidity data.</br>

<img width="375" height="105" alt="image" src="https://github.com/user-attachments/assets/088a6dbd-040e-4e46-ab5c-9a3a4e5a0435" />

</br>
</br>

After executing this line, you can use sht20 in the setup() and loop() functions to call functions related to the SHT20 sensor, such as sht20.initSHT20() to initialize the sensor or sht20.readTemperature() to read the temperature ; for examle :</br>
<img width="360" height="86" alt="image" src="https://github.com/user-attachments/assets/b029ddbc-6bda-40fc-97e8-e5aa8a80b15c" /> </br>
</br>
Hint2 :</br>
Maximum brightness of LED analog value = 255 </br>
Minimum brightness of LED analog value = 1 </br>
Maximum temperature value received from the sensor = 48 </br>
Minimum temperature value received from the sensor = 28 </br>
<img width="429" height="125" alt="image" src="https://github.com/user-attachments/assets/994fd7b5-dd2f-455f-bb7f-ac2efd0016ed" /> </br>
</br>
</br>
Board parts : </br>
</br>

<img width="1280" height="606" alt="image" src="https://github.com/user-attachments/assets/778249e1-c5d4-4a94-b652-6e220a162129" />
</br>

 1- SHT20 Temperature and Humedity sensor .</br>
 2- ESP8266 micro controler . </br>
 3- Onboard LED .</br>


