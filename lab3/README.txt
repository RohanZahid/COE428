Everything works! I was able get insertionSort and mergeSort to sort properly. I used https://www.thecrazyprogrammer.com/2014/03/c-program-for-implementation-of-merge-sort.html as reference for mergeSort.

InsertionSort: 
	Best Case (when the array is sorted): For 1, 2, 3, 4, 5, there are 30 comparisons, 0 swaps, and 0 copies. The function is omega(n).
	Worst Case (when the array is sorted backwards): For 5, 4, 3, 2, 1, there are 62 comparisons, 10 swaps, and 0 copies. The function is O(n squared). 
	Average Case (when the array is partially sorted): For 1, 2, 4, 3, 5, there are 34 comparisons, 1 swaps, and 0 copies. The function is between O(n squared) and omega(n). 

MergeSort: 
	Best Case (when the array is sorted): For 1, 2, 3, 4, 5, there are 63 comparisons, 12 swaps, and 12 copies. The function is o(nlogn).
	Worst Case (when the array is sorted backwards): For 5, 4, 3, 2, 1, there are 63 comparisons, 12 swaps, and 12 copies. The function is o(nlogn).
	Average Case (when the array is partially sorted): For 1, 2, 4, 3, 5, there are 63 comparisons, 12 swaps, and 12 copies. The function is o(nlogn).
	MergeSort is always the same complexity. 

