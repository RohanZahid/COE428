void mySort(int d[], unsigned int n)
{	int i, j, temp;
	int min = 0;
	for (i = 0; i < n; i++) {
		min = i;
		for(j = i+1; j < n; j++) {
			if(d[j] < d[min])
				min = j;
		}		
		temp = d[min];
		d[min] = d[i];
		d[i] = temp;	
		
	}
}
