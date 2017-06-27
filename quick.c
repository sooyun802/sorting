void quickSort(int *data,int first,int last){
	if(first<last){
		int splitPoint;

		splitPoint=split(data,first,last);
		quickSort(data,first,splitPoint-1);
		quickSort(data,splitPoint+1,last);
	}
}

int split(int *data,int first,int last){
	int left;
	int right;
	int splitPoint;
	int splitVal;
	int temp;

	left=first+1;
	right=last;
	splitVal=data[first];

	while(left<=right){
		while(1) {
			if(data[left]>splitVal || left>right) break;
			else left++;
		}
		while(1) {
			if(data[right]<splitVal || left>right) break;
			else right--;
		}
		if(left<right) {
			temp=data[left];
			data[left]=data[right];
			data[right]=temp;
		}
	}
	splitPoint=right;
	temp=data[first];
	data[first]=data[splitPoint];
	data[splitPoint]=temp;

	return splitPoint;
}
