# MRE-320-project1
# DHT11 Josiah Ritchie

Summary:
The DHT11 is a temperature and humidity sensor.  Using a Negative Temperature Coefficient of a known material, it relates electrical resistance to temperature.  Additionally, it detects relative humidity of the air using the electrical resistance of air between two electrodes.  In this project, the goal is to test whether this sensor's characteristics are consistent with the manufacturer's specifications.  

The following process can be used to analyze important characteristics of the DHT 11 sensor such as: 
•	Range
•	Repeatability
•	Accuracy
•	Resolution

The process requires some tools, items, and software, including:
•	A control volume (a carboard box works well)
•	A heating pack or moist towel
•	A freezer
•	Reference thermometer and hygrometer
•	DHT 11 sensor
•	Arduino board
•	Arduino IDE software
•	Excel
•	Matlab


Process (see PDF attachment "DHT11 Process" for testing setup):

First, the ground truth of the reference sensors were verified.  To verify humidity, the dew point can be measured be adding cold water to a container (metal works great) and measuring the temperature where condensation begins to form on the container.  The relative humidity can be calculated using current room temperature and dew point temperature (there are online calculators to do this for you).  Also, the analog thermometer can be verified at 0 C using melting ice, which will be 0 C theoretically as it undergoes a phase change.  
 
Next, a testing setup is constructed where humidity and temperature can be altered and maintained long enough to take data.  A cardboard box was used, which could be put in the freezer and easily filled with hot and humid items.  A window was cut so the sensors inside could be read.  Hot glue was used for mounting the sensors and sealing a plastic bag over the window.  

A heating pack contained moisture to raise the relative humidity.  Hot water in a sealed container raised the internal temperature as well, but did not release humidity, effectively lowering the relative humidity.  

To take data, the box was closed and time was given for the box and sensors to reach thermal equilibrium.  Using an Arduino code, ten data values were taken over 10 seconds then pasted into an excel sheet.  The reference humidity and temperature were recorded along with DHT11 data.  

After obtaining a large range of temperature values and humidity values, the data can then be plotted using Excel or Matlab, depending on preference.  I recorded my data and data set averages in Excel, then imported into Matlab for data analysis.  

Summary of Findings (See DHT11SensorMeasurement.pdf and Powerpoint Presentation in "MeasurmentResults" folder for Data Analysis and Visualization):

Based on data analysis, the DHT11 did not perform as well as intended by the manufacturer.  Data points often were outside of intended accuracy range.  Temperature was often less accurate than Manufacturer specifications (Within 3-4 C of Real Temperature). The most accurate range was only about 5-45 C.  Repeated measurements sometimes differed by 3-4 C.

The relative humidity sensor was even less accurate, often differing by 6-7% from actual humidity.  Also, there was not an obvious range where the humidity sensor performed accurately.  Repeated measurements sometimes differed by 5-6 %.


