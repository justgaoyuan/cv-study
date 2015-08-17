#!/usr/bin/env python
#coding=utf-8 

import cv2
import sys

if __name__ == "__main__":
	if len(sys.argv) < 2:
		print("wrong")
		exit()

	img = cv2.imread(sys.argv[1])

	#cv2.NamedWindow("Example",cv.CV_WINDOW_AUTOSIZE)

	cv2.imshow("src img", img)
	dst_img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
	cv2.imshow("dst img", dst_img)

	cv2.waitKey(0)
	cv2.destroyAllWindows()