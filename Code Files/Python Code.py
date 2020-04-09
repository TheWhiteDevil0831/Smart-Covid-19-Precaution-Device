# Download the helper library from https://www.twilio.com/docs/python/install
from twilio.rest import Client
import serial
import time
ser = serial.Serial('COM4', 9600)


# Your Account Sid and Auth Token from twilio.com/console
account_sid = 'ACd20a6f020efba34b6e87e57cc629fb6a'         # here put your ACCOUNT SID  
auth_token = '148c2a129569b28cc2fdd76b1f1291fa'            # here put your AUTH TOKEN
client = Client(account_sid, auth_token)


while True:
    while ser.inWaiting():
        temp = ser.readline().decode()
        messageTosend="ALERT!!!!!!!!  "+str(temp)+"."
        message = client.messages.create(
                              body=messageTosend,
                              from_='whatsapp:+14155238886',
                              to='whatsapp:+919538515360'        # here put your Whatsapp number added in Twilio Account
                          )
        time.sleep(10)

print(message.sid)
