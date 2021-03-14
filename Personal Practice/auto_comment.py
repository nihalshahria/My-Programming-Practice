import pyautogui 
import time
pyautogui.FAILSAFE = False
t_end = time.time() + 60 * 1
while time.time() < t_end:
	time.sleep(1)
	pyautogui.press('e')
	pyautogui.press('f')
	pyautogui.press('a')
	pyautogui.press('z')
	time.sleep(1)
	pyautogui.press('enter')

