from PIL import Image as im
import cv2
import numpy as np
import matplotlib.pyplot as plt

cap = cv2.VideoCapture(1)


print(cap.get(cv2.CAP_PROP_EXPOSURE))
cap.set(cv2.CAP_PROP_GAIN, 0)
cap.set(cv2.CAP_PROP_EXPOSURE, 0)

ret, framec = cap.read()

gray = cv2.cvtColor(framec, cv2.COLOR_BGR2GRAY)

a = np.array(gray)


print(np.shape(a))
plt.imshow(gray)
plt.savefig("libro_2")
plt.show()

print(a)
np.savetxt("libro_2.txt", a)
