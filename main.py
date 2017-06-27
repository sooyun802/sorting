import bubble
import insertion
import selection
import quick
import merge
import time

variable=input("data set size: ")
arr=[0]*variable
brr=[0]*variable

import random

for i in range(0,variable):
    arr[i]=random.randint(0,100)

for i in range(0,variable):
    brr[i]=arr[i]
st=time.time()
bubble.bubbleSort(arr,variable)
fi=time.time()
print "bubble sort time:",fi-st

for i in range(0,variable):
    arr[i]=brr[i]
st=time.time()
insertion.insertionSort(arr,variable)
fi=time.time()
print "insertion sort time:",fi-st

for i in range(0,variable):
    arr[i]=brr[i]
st=time.time()
selection.selectionSort(arr,variable)
fi=time.time()
print "selection sort time:",fi-st

for i in range(0,variable):
    arr[i]=brr[i]
st=time.time()
quick.quickSort(arr,0,variable-1)
fi=time.time()
print "quick sort time:",fi-st

for i in range(0,variable):
    arr[i]=brr[i]
st=time.time()
merge.mergeSort(arr,0,variable-1)
fi=time.time()
print "merge sort time:",fi-st

