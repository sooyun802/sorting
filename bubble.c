void bubbleSort(int *data, int length){
	int firstUnsorted;
	int swapFlag;

	firstUnsorted=0;
	swapFlag=1;

	while(firstUnsorted<length-1){
		int index;

		index=length-1;
		swapFlag=0;

		while(index!=firstUnsorted){
			int temp;

			if(data[index]<data[index-1]) swapFlag=1;
			if(swapFlag==1) {
				temp=data[index];
				data[index]=data[index-1];
				data[index-1]=temp;
			}
			index--;
			swapFlag=0;
		}
		firstUnsorted=firstUnsorted+1;
	}
}
