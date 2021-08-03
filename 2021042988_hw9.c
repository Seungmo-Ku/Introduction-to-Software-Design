#include <stdio.h>
#include <stdlib.h>


void change(int *arr, int startP, int n); //it changes array's numbers between start point and the minimum numbers


int main (void) {

	int n; //startP is a changing index of an array
	int i = 0;
	int *arr;
	scanf ("%d", &n);
	arr = (int *) malloc (sizeof(int) * (n+1));
	for (; i < n; i ++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i ++) {
		printf ("%d ", arr[i]);
	}
	printf ("\n");

	for (i = 0; i < n-1; i ++) {
		change (arr, i, n);
	
	}
	for (i = 0; i < n; i ++) {
		printf ("%d ", arr[i]);
	}
	printf ("\n");

	free (arr);
	return 0;
}

void change(int *arr, int startP, int n){
	
	int min, temp, point, k;
        min = arr[startP];
        point = startP;
	for (k = startP; k < n; k ++) {
		if (arr[k] < min && k != startP) {
			min = arr[k];
			point = k;
		}
	}
	temp = arr[point];
	arr[point] = arr[startP];
	arr[startP] = temp;
}
