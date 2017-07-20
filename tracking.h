//
//  tracking.h
//  
//
//  Created by Hans Chang on 2017-07-13.
//
//

#ifndef ____tracking__
#define ____tracking__

#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <iostream>
#include <vector>
#include <fstream>

using namespace cv;

Mat calcGradient(const Mat &input, const bool isVertical);
Mat calcMag(const Mat &xGrad, const Mat &yGrad);
void calcDif(int x, int y,const cv::Mat &weight,double gx, double gy, cv::Mat &out);
vector<double> findDispVec(int x0, int y0, int x1, int y1);
Point trackEyeCenter(Mat eyeROI);


//cv::Mat matrixMagnitude(const cv::Mat &matX, const cv::Mat &matY);
#endif /* defined(____tracking__) */
