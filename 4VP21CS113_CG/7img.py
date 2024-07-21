#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 14:37:26 2024

@author: lab2pc19
"""

import cv2
image=cv2.imread('scenery2.jpeg')
print(image.shape)
height,width=image.shape[:2]
cv2.imshow('Original Image',image)
mid_x=width//2
mid_y=height//2
top_left=image[0:mid_y,0:mid_x]
top_right=image[0:mid_y,mid_x:width]
bottom_left=image[mid_y:height,0:mid_x]
bottom_right=image[mid_y:height,mid_x:width]
cv2.imshow('Top left Quadrant',top_left)
cv2.imshow('Top right Quadrant',top_right)
cv2.imshow('Bottom left Quadrant',bottom_left)
cv2.imshow('Bottom right Quadrant',bottom_right)
cv2.waitKey(0)
cv2.destroyAllWindows()