import serial
import pyautogui

arduino = serial.Serial('COM4', 9600)


while True:
    mensagem = arduino.readline().decode().strip()
    if mensagem == "pulo":
        pyautogui.press('space')
        print("você pulou")
