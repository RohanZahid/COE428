//  
//
//
#include <stdio.h>
#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void add(char * tag)
{
	int hashTag, i;
	int intTag = strlen(tag);
	hashTag = intTag%HASH_TABLE_SIZE;
	if(hash_table[hashTag].count == 0) {
		/*hash_table[hashTag].string = tag;*/
		hash_table[hashTag].string = (char *) malloc(500);
		strcpy(hash_table[hashTag].string, tag);
		hash_table[hashTag].count++;
	}
	else {
		for(i = hashTag + 1; i < HASH_TABLE_SIZE; i++) {
			if(hash_table[i].count == 0) {
				/*hash_table[hashTag].string = tag;*/
				hash_table[i].string = (char *) malloc(500);
				strcpy(hash_table[i].string, tag);
				hash_table[i].count++;	     
				i = HASH_TABLE_SIZE;
			}
			if(i == HASH_TABLE_SIZE - 1)
				i = 0;
		}	   	   	   
	}
	
}
void printCount() 
{
	int i;
	for(i = 0; i < HASH_TABLE_SIZE; i++) {
		if(hash_table[i].count != 0)
			printf("%s %d\n", hash_table[i].string, hash_table[i].count);
	}
}

