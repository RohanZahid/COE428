#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapDelete();
extern void heapXML(int);

int main(int argc, char * argv[])
{
  	int value, i = 0, j, max = 0, start = 0, temp;
  	int initialArray[100];
  	while (scanf("%d\n", &value) != EOF) {
    	/*fprintf(stderr, "READING INPUT: %d\n", value);*/
		initialArray[i++] = value;
  	}
	while(start < i) {
		max = start;
		for(j = start; j < i; j++) {
			if(initialArray[j] > initialArray[max]) {
				max = j;
			}
		}
		addHeap(initialArray[max]);
		temp = initialArray[start];
		initialArray[start] = initialArray[max];
		initialArray[max] = temp;
		start++;
	}
	fprintf(stderr, "\n");
	heapXML(1);
	fprintf(stderr, "\n\n");
  	for(i = 0; i < start; i++) {
		push(heapDelete());
	}
	fprintf(stderr, "\n");
	for(i = 0; i < start; i++) {
		fprintf(stderr, "%d\n", pop());
	}	      
  	exit(0);
}

