# Smart-Covid-19-Precaution-Device
 # Titile of the Project : 
 
    SMART COVID-19 PRECAUTION DEVICE
 # Description : 
   This project gives us information about to take precaution towards Covid-19 Out break.The Project or Device contain two main components /sensor
       `1)Ultrasonic sensor and 
       2)Temperature sensor.`
	           The Ultasonic sensor is placed Beside the door of our home ,if any person is crosses that Utrasonic sensor , It  detect and immediately sends a Whatsapp message to our mobile phones i.e 
`“ ALERT!!!!!!!!   Someone is outside your door. Please tell him to clean his hands with sanitizer kept there and touch the temperature sensor ”.` when ower see the message he has to tell the person to touch the temperature sensor and check his/her body temperature. If the person body temperature is more then the normal body temperature
Then one more Whatsapp message is sent to owner regarding his temperature measurement i.e
 `“ALERT!!!!!!!!  The person's body temperature is not normal He has Fever 
TEMPERATURE = xx.xx'F “.`
	Now the owner has to take few precaution measure like wearing mask ,washing hands often ,using sanitizer,social distancing etc. The person may affected or may not be, but we need to take precaution everytime.
Hence this device helps us to detect the temperature of preson (regarding he/she is well or unwell) and we can take precaution in advance.
The Covid-19 is very dangerous and viral infection so we need to take precaution in advance like social distancing ,wearing mask etc .
 # Hardware And Software requirements:
   # Hardware requirements:
    1) Arduino UNO 
    2) Ultrasonic sensor
    3) LM35 Temperature sensor 
    4) Bread board
    5) Few Jumpper Wires
   # Software Requirements:
    1) Arduino IDE  ( to run / dump Arduino code )
    2) Anaconda Spyder  or  any other python Compiler  ( to run     python code )
    3) Twilio Website (account created and setup)
           Install Twilio in your Python IDE
              •	pip install twilio    
	      for futher any errors use this website :
	      https://www.twilio.com/docs/libraries/python

    4) Whatsapp messenger

 # Process Flow:

    The “ PROCESS FLOW “ of the project is given above ,and its illustrate in steps, the steps are as follows
    STEP1 : when any person pass infront of the  ultra-sonic sensor
    STEP2 : the user will get Whatsapp message that “ ALERT!!!!!!!!   Someone is outside your door. Please tell
    him to clean his hands with sanitizer kept there and touch the temperature sensor ”.
    STEP3 : By manually telling to  “touch the temperature sensor”
    STEP4 : If that person's temperature is not normal Then owner gets next alert message as
    ``“ALERT!!!!!!!!  The person's body temperature is not normal He has Fever
    TEMPERATURE = xx.xx'F “.``
 # Data Flow:

    The “ DATA FLOW “ of the project is given above ,and its illustrate in steps, the steps are as follows.
    STEP 1)  The Ultrasonic sensor acts as first input to the arduino which then processes the input
    according to the arduino code and gives output to port.
    STEP 2)  The temperature sensor all takes temperature interms of input and according to the the
    arduino code output is given to port.
    STEP 3)  The python code gets the ouput of each sensor and gives the  result to the ACCOUNT SID
    and AUTH TOKEN i.e  Twilio account by API METHOD
    STEP 4)  Then From the Twilio website /account output is send to the  Whatsapp Number added in that Account.
    STEP 5)  According to the Whatsapp message we can take precautions .
