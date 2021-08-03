#include <stdio.h>
#include <stdlib.h>


void change(int *arr, int startP, int n); //it changes array's numbers between start point and the minimum numbers


int main (void) {

	int n; //startP is a changing index of an array
	int i = 0, j = 0, a = 0;
	int indexA = 0;
	int count = 0;
	int *arr;
	int arr2[100];
	scanf ("%d", &n);
	arr = (int *) malloc (sizeof(int) * n);
	for (; i < n; i ++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i ++) {
		printf ("%d ", arr[i]);
	}
	printf ("\n");
	for (i = 0; i < n; i ++) {
		a = 0;
		for (j = 0; j <= indexA; j ++) {
			if (arr[i] == arr2[j]) {
				a = 1;
			}
		}
		if (a == 0) {
			arr2[indexA] = arr[i];
			indexA++;
		}
		
	}
	for (i = 0; i < indexA-1; i ++) {
		change (arr2, i, indexA);
	
	}
	for (i = 0; i < indexA; i ++) {
		printf ("%d ", arr2[i]);
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
