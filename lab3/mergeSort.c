#include "mySort.h"
void merge(int array[], unsigned int first, unsigned int mid, unsigned int last)
    {
		int temp[last - first + 1];
		int i, j, k;
		i = first;
		j = mid + 1;
		k = 0;
	
	while(myCompare(i, mid) <= 0 && myCompare(j, last) <= 0)
		{
			if(myCompare(array[i], array[j]) < 0)
				myCopy(&array[i++], &temp[k++]);
			else
				myCopy(&array[j++], &temp[k++]);
		}
	
	while(myCompare(i, mid) <= 0)
		myCopy(&array[i++], &temp[k++]);
		
	while(myCompare(j, last) <= 0)	 
		myCopy(&array[j++], &temp[k++]);
		
	for(i = first,j = 0; myCompare(i, last) <= 0; i++,j++)
		mySwap(&array[i], &temp[j]);
    }
void mySort(int array[], unsigned int first, unsigned int last)
    {
		if(myCompare(last - first + 1, 1) == 0)
			return;
		else {
			int mid = (last + first)/2;
			mySort(array, first, mid);
			mySort(array, mid + 1, last);
			merge(array, first, mid, last);
		}
    }


