#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern char *  pop();
extern void push(char *);
extern void add(char * tag);
extern void printCount();
int main(int argc, char * argv[])
{
  int ch,index = 0, i;
  char input[500], popped[500];
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    //
    if(ch == '<')
    	i = 1;
    else if(i == 1 && ch == '/')
		i = 2;
    else if(i == 1 && ch != '/') {
		if(ch != '>') {
			input[index] = ch;
			index++;
		}
		else {
			push(input);
			add(input);
			for(i = 0; i < index; i++)
				input[i] = NULL;
			index = 0;
			i = 0;
		}
		
    }
    if(i == 2 && ch != '/') {
		if(ch != '>') {
			input[index] = ch;
			index++;
		}
		else {
			strcpy(popped, pop());
			if(popped == (char *) 0) {
				printf("NOT Valid.\n");
				exit(1);
			}
			else if(strcmp(popped, input) != 0) {
				printf("NOT Valid.\n");	   	   	   	   
				exit(1);
        	}
			for(i = 0; i < index; i++)
				input[i] = NULL;
			index = 0;
		}
    }
}
  	if(isEmpty() == 1) {
		printf("Valid.\n");
		printCount();
		exit(0);
	}
	else
		printf("NOT Valid.\n");
  		exit(1);
}

