#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;  
  
  
int main()  
{
	Mat img = imread("menu.png");
	Mat gray_img;

	cvtColor(img, gray_img, CV_BGR2GRAY);
	imwrite("test.jpg", gray_img);
}  