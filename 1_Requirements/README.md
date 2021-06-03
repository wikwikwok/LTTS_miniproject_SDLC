# Requirements
## Briefing
* The system will compare the event-triggering mechanism to classical periodic sampling.
* This system will be developed with the help of an arduino UNO.
## Cost
Project was free of cost as open source software was used and hardware was provided by the institute itself.
## Features
The system features are as follows:
* Checking of sensor status.
* Commencing transmission if status turns out to be an event.
## SWOT Analysis
![SWOT ANALYSIS](https://github.com/wikwikwok/LTTS_miniproject_SDLC/blob/main/1_Requirements/Untitled%20Diagram.png)

# Detailed Requirements
## High Level Requirements
|  ID    | Description | Status|
 |:------:|:-----------:|:-------|
 | HR-1   | Event Status Checker| Implemented|
 ## Low Level Requirements
  |   ID     | Description  | H_ID |   Status     |
 |:------:  |:-----------:|:-------:|-----------:|
 | LR-1     | C     | HR-1    | Implemented|
 | LR-1     | Sensor 1 Output | HR-1  | Implemented|
 | LR-2     | Sensor 2 Output | HR-1  | Implemented|
 | LR-3     | if-else statement| HR-1| Implemented|
 
 # 4W's and 1'H
 ### Who:
 The system is designed to compare event trigger sampling to periodic sampling
 
 ### What:
 A simple and efficient method of wireless transmission
 
 ### When:
 Whenever the sensor will face error the system will activate and go from 'non available' to 'fully functional' 
 
 ### Where:
 Can be used in applications like power grid protection relays
 
 ### How:
 With the help of arduino one screen will show periodic sampling and with the help of bluetooth module and the android mobile app the other screen will show event triggered sampling
