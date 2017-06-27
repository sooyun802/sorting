def quickSort(data,first,last):
    if(first<last):
        splitPoint=split(data,first,last)
        quickSort(data,first,splitPoint-1)
        quickSort(data,splitPoint+1,last)

def split(data,first,last):
    left=first+1
    right=last
    splitVal=data[first]
    while(left<=right):
        while(1):
            if(left>right or data[left]>splitVal):
                break
            else:
                left+=1
        while(1):
            if(left>right or data[right]<splitVal):
                break
            else:
                right-=1
        if(left<right):
            data[left],data[right]=data[right],data[left]
    splitPoint=right
    data[first],data[splitPoint]=data[splitPoint],data[first]
    return splitPoint

