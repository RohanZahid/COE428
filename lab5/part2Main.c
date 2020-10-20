#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
	int i, popped;
	int table[26];
	for(i = 0; i < 26; i++)
		table[i] = 0;
	i = 0;
  	int ch;
  	while ((ch = getchar()) != EOF) {
    	if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      		continue;
    //
    	if(ch == '<')
    		i = 1;
    	else if(i == 1 && ch == '/')
			i = 2;
    	else if(i == 1 && ch != '/') {
			push(ch);
			table[ch-97]++;
			i = 0;
    	}
    	if(i == 2 && ch != '/') {
			i = 0;
			popped = pop();
			if(popped == -1) {
				printf("NOT Valid.\n");
				exit(1);
			}
			else if(popped != ch) {
				printf("NOT Valid.\n");	   	   	   	   
				exit(1);
        	}
    	}
	}
  	if(isEmpty() == 1) {
		printf("Valid.\n");
		for(i = 0; i < 26; i++) {
			if(table[i] != 0)
				printf("%c %d\n", (i+97), table[i]);
		} 
		exit(0);
	}
	else
		printf("NOT Valid.\n");
  	exit(1);
}

