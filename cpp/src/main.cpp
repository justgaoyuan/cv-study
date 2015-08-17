#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;  
  
  
int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout<< "Please set the path_to_img" << std::endl;
		return -1;
	}

	Mat img = imread(argv[1]);
	Mat gray_img;

	cvtColor(img, gray_img, CV_BGR2GRAY);
	imwrite("test.jpg", gray_img);
}