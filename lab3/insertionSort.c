#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
	int i, j;

   	/* Step 1: Is there nothing to sort? */

   	while (myCompare(first, last) < 0) {

      	/* Step 2: Swap... */

      		for(i = first + 1; myCompare(i, last) <= 0; i++) {
			for(j = i; myCompare(j, last) <= 0; j++) {
         			while(myCompare(array[j], array[j-1]) < 0) {
					mySwap(&array[j], &array[j-1]);         			
					if (myCompare(j, 1) > 0)
						j--;
         			}       		
			}
      		}
		return;
    	}
}	
