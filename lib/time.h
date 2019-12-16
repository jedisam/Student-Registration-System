#include <stdio.h>
#include <time.h>


#ifndef TIME_H_
#define TIME_H_


	int tm(void) //for time
	{
	    time_t t;
	    time(&t);
	    printf("\t\t%s\n",ctime(&t));
	
	    return 0 ;
	}


#endif
