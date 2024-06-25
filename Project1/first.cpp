<<<<<<< HEAD
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main(int argv, char* argc) {
	Mat A;
	VideoCapture video;
	video.open(0);
	while (true) {
		video >> A;
		flip(A, A, 1);
		imshow("x", A);
		waitKey(1);
	}
	video.release();
	
	return 0;
}
=======
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;

int main(int argv, char* argc) {
	
	/*
	Mat A;
	VideoCapture video;
	video.open(0);
	while (true) {
		video >> A;
		flip(A, A, 1);
		imshow("x", A);
		waitKey(1);
	}
	video.release();
	*/
	

	// printf("OpenCV: %s", cv::getBuildInformation().c_str());

	/*
	Mat A = imread("F:\\College\\Internship\\opencv c++ codes\\Project1\\test.png", IMREAD_GRAYSCALE);
	namedWindow("frame", 1);
	imshow("frame", A);
	waitKey(0);
	*/

	/* DFT
	Mat A = imread("F:\\College\\Internship\\opencv c++ codes\\Project1\\testR.png", IMREAD_GRAYSCALE);
	Mat padded; //expand input image to optimal size
	int m = getOptimalDFTSize(A.rows);
	int n = getOptimalDFTSize(A.cols); // on the border add zero values
	copyMakeBorder(A, padded, 0, m - A.rows, 0, n - A.cols, BORDER_CONSTANT, Scalar::all(0));

	Mat planes[] = { Mat_<float>(padded), Mat::zeros(padded.size(), CV_32F) };
	Mat complexI;
	merge(planes, 2, complexI); // Add to the expanded another plane with zeros

	dft(complexI, complexI);

	// compute the magnitude and switch to logarithmic scale
	// => log(1 + sqrt(Re(DFT(I))^2 + Im(DFT(I))^2))
	split(complexI, planes); // planes[0] = Re(DFT(I), planes[1] = Im(DFT(I))
	magnitude(planes[0], planes[1], planes[0]);// planes[0] = magnitude
	Mat magI = planes[0];

	magI += Scalar::all(1); // switch to logarithmic scale
	log(magI, magI);

	// crop the spectrum, if it has an odd number of rows or columns
	magI = magI(Rect(0, 0, magI.cols & -2, magI.rows & -2));

	// rearrange the quadrants of Fourier image so that the origin is at the image center
	int cx = magI.cols / 2;
	int cy = magI.rows / 2;

	Mat q0(magI, Rect(0, 0, cx, cy)); // Top-Left - Create a ROI per quadrant
	Mat q1(magI, Rect(cx, 0, cx, cy)); // Top-Right
	Mat q2(magI, Rect(0, cy, cx, cy)); // Bottom-Left
	Mat q3(magI, Rect(cx, cy, cx, cy)); // Bottom-Right

	Mat tmp; // swap quadrants (Top-Left with Bottom-Right)
	q0.copyTo(tmp);
	q3.copyTo(q0);
	tmp.copyTo(q3);

	q1.copyTo(tmp); // swap quadrant (Top-Right with Bottom-Left)
	q2.copyTo(q1);
	tmp.copyTo(q2);

	normalize(magI, magI, 0, 1, NORM_MINMAX); // Transform the matrix with float values into a
	// viewable image form (float between values 0 and 1).

	imshow("Input Image", A); // Show the result
	imshow("spectrum magnitude", magI);
	waitKey();
	*/

	Mat grayscale;
	Mat A;

	VideoCapture video;
	video.open(0);
	video >> A;
	imshow("x", A);
	waitKey(0);
	
	video.saveMatricesToFile("F:\\College\\Internship\\opencv c++ codes\\Project1\\mat.txt", 1);

	video.release();


	return 0;
}
>>>>>>> 25eebf2ef86e1e60b9ba8ed83ab8069dd80ed408
