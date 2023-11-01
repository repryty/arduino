import serial
import time

pySerial=serial.Serial(
    port='COM4',
    baudrate=9600
)

while True:
    time.sleep(0.1)

    if pySerial.readable():
        
        # 들어온 값이 있으면 값을 한 줄 읽음 (BYTE 단위로 받은 상태)
        # BYTE 단위로 받은 response 모습 : b'\xec\x97\x86\xec\x9d\x8c\r\n'
        response = pySerial.readline()
        print(int(response[:len(response)-1].decode()))
        
        if(int(response[:len(response)-1].decode())<20):
            pySerial.write('a'.encode())
        else:
            pySerial.write('b'.encode())