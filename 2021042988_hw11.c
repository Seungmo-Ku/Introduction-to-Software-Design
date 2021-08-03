#include <stdio.h>
#include <stdlib.h>
struct Matrix {
	int* _ptr;
	int M;
	int N;
};
int get(struct Matrix* mat, int i, int j) {
	return mat->_ptr[i*mat->N+j];
	//5 5
}
void set(struct Matrix* mat, int i, int j, int d) {
	mat->_ptr[i*mat->N+j]=d;
}
int main (void) {
	struct Matrix mat;
	int i, j, k;
	scanf("%d %d", &mat.M, &mat.N);
	mat._ptr = (int *)malloc(sizeof(int)*(mat.M*mat.N));
	for (i=0; i<mat.M; i ++) {
		for (j=0; j<mat.N; j ++) {
			scanf ("%d", &k);
			set(&mat, i, j, k);
			
		}
	}
	printf ("%d %d\n", mat.M, mat.N);
	for (i=0; i<mat.M; i ++) {
		for (j=0; j<mat.N; j ++) {
			printf("%d ", get(&mat, i, j));
		}
		printf ("\n");
	}
	return 0;
}
