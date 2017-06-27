def mergeSort(data,first,last):
    if(first<last):
        q=(first+last)/2
        mergeSort(data,first,q)
        mergeSort(data,q+1,last)
        merge(data,first,q,last)

def merge(data,first,q,last):
    n1=q-first+1
    n2=last-q
    left=[0]*(n1+2)
    right=[0]*(n2+2)
    for i in range(1,n1+1):
        left[i]=data[first+i-1]
    for i in range(1,n2+1):
        right[i]=data[q+i]
    left[n1+1]=10000
    right[n2+1]=10000
    i=1
    j=1
    for k in range(first,last+1):
        if(left[i]<=right[j]):
            data[k]=left[i]
            i+=1
        else:
            data[k]=right[j]
            j+=1
