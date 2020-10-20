#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
	int i, popped;
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
	exit(0);
	}
	else
		printf("NOT Valid.\n");
  	exit(1);
}

