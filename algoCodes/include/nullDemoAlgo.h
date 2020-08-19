// DEMO by SpeedyZJF
/*.h files Demo Created by SpeedyZJF*/

#ifndef _NULLDEMOALGO_H_
#define _NULLDEMOALGO_H_

#include <string>

// ----- Test -----//
#define MAJOR_VER 6
#define MINOR_VER 1
#define PATCH_VER 0
// ----- Test -----//

namespace demoAlgo {
		class className {
		public:
			className(char* arg);
			virtual ~className();
			int itkTestFunc();
		protected:
			
		private:
			int m_Var = 0;
		
	};
}

#endif