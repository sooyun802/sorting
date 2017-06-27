void insertionSort(int *data,int length){
	int current;

	current=1;

	while(current<length) {
		int index;
		int placeFound;

		index=current;
		placeFound=0;

		while(placeFound<index) {
			int temp;
			int i;

			if(data[0]>=data[index]) {
				for(i=0;i<index;i++) {
					temp=data[index-i];
					data[index-i]=data[index-i-1];
					data[index-i-1]=temp;
				}
			}
			else if(data[placeFound]<=data[index] && data[placeFound+1]>=data[index]) {
				for(i=0;i<index-(placeFound+1);i++) {
					temp=data[index-i];
					data[index-i]=data[index-i-1];
					data[index-i-1]=temp;
				}
			}
			placeFound++;
		}
		current++;
	}
}
