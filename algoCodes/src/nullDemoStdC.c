// DEMO by SpeedyZJF
#include "../include/nullDemoStdC.h"

int testFunction()
{
	printf("Hello, World!\nThis is a test subroutine written by SpeedyZJF.\n");
	
	return 0;
}

void dspCurrentTime()
{
	/// Win && Linux
	struct tm *t;
	time_t localT;
	time(&localT);
	t = localtime(&localT);
	printf("CurrentTime: %02d:%02d:%02d\n", t->tm_hour, t->tm_min, t->tm_sec);
	
	return ;
}