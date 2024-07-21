#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 15:38:48 2024

@author: lab2pc19
"""

import cv2
image=cv2.imread('scenery3.jpeg')
blurred=cv2.GaussianBlur(image,(15,15),0)
smoothed=cv2.bilateralFilter(image,5,100,100)
cv2.imshow('Original Image',image)
cv2.imshow('Blurred Image',blurred)
cv2.imshow('Smoothed Image',smoothed)
cv2.waitKey(0)
cv2.destroyAllWindows()