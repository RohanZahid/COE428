#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3; //Initial is 3
    int from = 1; //Initial is 1
    int dest = 2; //Initial is 2
    if (argc == 2) {
        n = atoi(argv[1]);
    }
	if (argc == 4) {
        n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
		if(dest == from) {
			fprintf(stderr, "The Origin and Destination cannot be the same.");
			exit(-1);
		}
    }

    towers(n, from, dest);
    exit(0);
}

