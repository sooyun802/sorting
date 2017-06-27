def selectionSort(data,length):
    firstUnsorted=0
    while(firstUnsorted<length):
        indexOfSmallest=firstUnsorted
        index=firstUnsorted+1
        for i in range(index,length):
            if(data[i]<=data[indexOfSmallest]):
                indexOfSmallest=i
        data[firstUnsorted],data[indexOfSmallest]=data[indexOfSmallest],data[firstUnsorted]
        firstUnsorted+=1
