#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include "general.h" 


int main(int argc, char **argv){

	int length;
	int *data;
	struct timeval start, end;
	double result;
	

	
	if(argc < 2){
#if defined SELECTION
		printf("Usage: ./Selection.out NumOfData \n");
#elif defined BUBBLE
		printf("Usage: ./Bubble.out NumOfData \n");
#elif defined INSERTION	
		printf("Usage: ./Insertion.out NumOfData \n");
#elif defined QUICK
		printf("Usage: ./Quick.out NumOfData \n");
#endif
		exit(0);
	}
	
	if((length = atoi( argv[1] )) <= 0 ){

		printf("Input positive value.\n");
		exit(0);
			
	}


	data = (int*)malloc(sizeof(int)*length);

	srand(time(NULL));
	randomGen(data, length);

	if(argc < 3 || strcmp(argv[2], "-s") != 0){
		printf("Before Sort..\n", length);
		printData(data, length);
	}
	
	gettimeofday(&start, NULL);

#if defined SELECTION
	selectionSort(data, length);	
#elif defined BUBBLE
	bubbleSort(data, length);
#elif defined INSERTION	
	insertionSort(data, length);	
#elif defined QUICK
	quickSort(data, 0, length -1);
#endif

	gettimeofday(&end, NULL);

	if(argc < 3 || strcmp(argv[2], "-s") != 0){
		printf("After Sort..\n", length);
		printData(data, length);
	}

	result = (end.tv_sec + end.tv_usec/1000000.0)
				- (start.tv_sec + start.tv_usec/1000000.0);
			

	printf("Elapsed time : %lf \n", result); 
	free(data);
	
}



