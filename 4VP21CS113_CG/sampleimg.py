#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 14:02:50 2024

@author: lab2pc19
"""
import cv2
image=cv2.imread('waterfall.jpeg')
print(type(image))
print(image.shape)
cv2.imwrite('xxx.jpeg',image)
cv2.imshow('new window',image)
resized=cv2.resize(image,(150,100))
cv2.imshow('new size',resized)
crop=image[100:150,150:400]
cv2.imshow('crop',crop)
cv2.waitKey(0)
