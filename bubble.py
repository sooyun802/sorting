def bubbleSort(data,length):
    firstUnsorted=0
    swapFlag=1
    while(firstUnsorted<length-1):
        index=length-1
        swapFlag=0
        while(index!=firstUnsorted):
            if(data[index]<data[index-1]):
                swapFlag=1
            if(swapFlag==1):
                data[index],data[index-1]=data[index-1],data[index]
            index-=1
            swapFlag=0
        firstUnsorted+=1;
