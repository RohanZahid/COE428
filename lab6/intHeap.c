#include <stdio.h>
#include <stdlib.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
static int top = 1;
static int bottom = 1;
static int heap[100];

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	int value = 0;
	fprintf(stderr, "%d\n", heap[bottom]);
	value = heap[bottom];
	heap[bottom++] = -999;
	return value;
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	heap[top++] = thing2add;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return top-bottom;  //A dummy return statement
}
void heapXML(int node)
{
  if(node <= heapSize()) {
  	fprintf(stderr, "<node id=\"%d\">", heap[node]);
	heapXML(2*node);
	heapXML(2*node + 1);
	fprintf(stderr, "</node>");  
  }
}

