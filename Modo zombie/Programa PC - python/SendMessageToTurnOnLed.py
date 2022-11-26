import sys
import serial
from time import sleep
#-- Cadena de pruebas a enviar

#-- Sacar mensaje inicial
print ("Encender luz led leyendo mensaje para saber qué led encender")

try:
  serial = serial.Serial('com3', 9600, timeout=1)
except serial.SerialException:
  #-- Error al abrir el puerto serie
  sys.stderr.write("Error al abrir puerto (%s)\n")
  sys.exit(1)

serial.setDTR(False)
sleep(1)
serial.flushInput()
serial.setDTR(True)
cadena= ''
while cadena.lower() != 'quit':
  print ("Enter a string to send")
  cadena=input()
  serial.write(bytes(cadena, 'utf-8'))
  sleep (1)

serial.close()