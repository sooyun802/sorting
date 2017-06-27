def insertionSort(data,length):
    current=1;
    while(current<length):
        index=current;
        placeFound=0;
        while(index>0 and not placeFound):
            if(data[index]<data[index-1]):
               data[index],data[index-1]=data[index-1],data[index]
               index-=1
            else:
               placeFound=1
        current+=1

