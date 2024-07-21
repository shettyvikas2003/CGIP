#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 15:30:44 2024

@author: lab2pc19
"""

import cv2
import numpy as np
image=cv2.imread('scenery3.jpeg')

gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
blurred=cv2.GaussianBlur(gray,(5,5),0)
laplacian=cv2.Laplacian(blurred,cv2.CV_64F)
edges=cv2.Canny(gray,150,300)
sobel_x=cv2.Sobel(image,cv2.CV_64F,1,0,ksize=5)
sobel_y=cv2.Sobel(image,cv2.CV_64F,0,1,ksize=5)
cv2.imshow('Original Image',image)
image[edges==255]=(255,0,0)
cv2.imshow('Blurred Image',blurred)
cv2.imshow('Canny Edges',edges)
cv2.imshow('Laplacian_Filter',laplacian)
cv2.imshow('Sobel X Filter',sobel_x)
cv2.imshow('Sobel Y Filter',sobel_y)
cv2.waitKey(0)
cv2.destroyAllWindows()