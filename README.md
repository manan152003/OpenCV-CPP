# OpenCV-C++


OpenCV Version 4.9.0(latest) complied using MSVC compiler instead of GCC.
This project demonstrates how to use OpenCV with C++ to capture video from a USB camera. The code in first.cpp showcases basic video capture operations using OpenCV.

*********************************************************************************************************************************************************************

Currently, this project consists of a new module that is not present in the official opencv 4.x ver, and is developed by me

## How to use 

-> Replace cap.cpp & videoio.hpp from this repo to your forked opencv with cap.cpp & video.hpp in modules/videoio/src and modules/videoio/include/opencv2

-> After doing so, use opencv.sln in visual studio to build the neccesary executables required to run the code

![image](https://github.com/manan152003/OpenCV-CPP/assets/99275086/95f259f1-b392-46f3-ac30-893a8fe664a2)

![image](https://github.com/manan152003/OpenCV-CPP/assets/99275086/d01945c4-ceff-407d-b421-605d9b5a12ed)

-> Thus, on building you will be able to use this module 'saveMatricesToFile' which allow you to save the matrices of image or videostream directly in a file, with metadeta of that image.

-> Use Project1 or first.cpp, if you need any help in doing so
