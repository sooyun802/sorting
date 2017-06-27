#include <stdio.h>
#include <stdlib.h>

/* ICE2010, Spring 2014 */
/* flag to determine whether to display a number in either hexadecimal or decimal */
#define HEX_DISPLAY_FLAG 0

void randomGen(int *data, int length){

	int i;
	for(i = 0; i < length; i++){

		data[i] = rand()%10000;

	}
}


void printData(int *data, int length){

	int i;
	for(i = 0; i < length; i++){
	
		if(i != 0 && i % 10 == 0){ 
		//if(i != 0 && i % 5 == 0){ 
			printf("\n");
		}
	
#if HEX_DISPLAY_FLAG /* [ */
		printf("%6x", data[i]);
#else
		printf("%8d", data[i]);
#endif /* ] */
	}

	printf("\n");
}



