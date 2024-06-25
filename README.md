
# OpenCV-C++

This project demonstrates how to use OpenCV with C++ to capture video from a USB camera. The code in `first.cpp` showcases basic video capture operations using OpenCV.

**OpenCV Version:** 4.10.0-dev (latest), compiled using the MSVC compiler instead of GCC.

---

## New Module

This project includes a custom module developed by me that is not present in the official OpenCV 4.10.0-dev(4.x) version.

## How to Use

1. Replace `cap.cpp` and `videoio.hpp` from this repository with the corresponding files in your forked OpenCV:
   - `cap.cpp` in `modules/videoio/src`
   - `videoio.hpp` in `modules/videoio/include/opencv2`

2. Open `opencv.sln` in Visual Studio and build the necessary executables required to run the code.

   ![image](https://github.com/manan152003/OpenCV-CPP/assets/99275086/95f259f1-b392-46f3-ac30-893a8fe664a2)

   ![image](https://github.com/manan152003/OpenCV-CPP/assets/99275086/d01945c4-ceff-407d-b421-605d9b5a12ed)

3. After building, you will be able to use the new module `saveMatricesToFile`, which allows you to save the matrices of images or video streams directly to a file, along with metadata.

4. Refer to `Project1` or `first.cpp` if you need any help using the module.
