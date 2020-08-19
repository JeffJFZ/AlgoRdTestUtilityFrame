// DEMO by SpeedyZJF
#include "../include/nullDemoMid.hpp"
#include <iostream>

namespace demoMid {
	void className::testFunc(const int& intVar)
	{
		std::cout<<"testFunc: "<<intVar<<" - "<<this->midWare<<std::endl;
		return;
	}

}