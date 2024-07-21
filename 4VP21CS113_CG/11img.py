#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 15:47:40 2024

@author: lab2pc19
"""

import cv2
image=cv2.imread('scenery3.jpeg')
gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
blurred=cv2.GaussianBlur(gray,(5,5),0)
contours,_=cv2.findContours(blurred,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
contour_image=image.copy()
cv2.drawContours(contour_image,contours,-1,(0,255,0),2)
cv2.imshow('Contoured Image',contour_image)
cv2.waitKey(0)
cv2.destroyAllWindows()