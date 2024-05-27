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