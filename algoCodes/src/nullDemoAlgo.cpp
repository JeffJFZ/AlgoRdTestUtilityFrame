// DEMO by SpeedyZJF
#include "../include/nullDemoAlgo.h"
#include "logging.h"
#include "itkImage.h"
#include <iostream>

//using namespace cv;
//using namespace std;

namespace demoAlgo {
	className::className(char* argvFirst)
	{
		google::InitGoogleLogging(argvFirst);

	}

	className::~className()
	{
		google::ShutdownGoogleLogging();
	}

	int className::itkTestFunc()
	{
		typedef itk::Image<unsigned short, 3> ImageType;
		ImageType::Pointer imag = ImageType::New();
		std::clog << "ITK TEST DEMO!" << std::endl;
		return 0;
	}

}	// End of namespace