#include <stdio.h>

int main (void) {
	
	int arr[20][20];
	int i, j, size;
	int x, y, direction;
	int value = 1;
	int yes = 1;
	while (yes) {
	
	printf ("ũ�⸦ �Է����ּ���(MAX : 20) : ");
	scanf ("%d", &size);
	while (size > 20 || size < 0) {
		printf ("��ȿ�� ���� �Է����ּ���.\n");
	}
	if (size == 0) {
		yes = 0;
	} 
	value = 1;
	x = 0, y = 0, direction = 1;	
	for (i=0; i <size; i ++) {
		for (j=0; j <size; j ++) {
			arr[i][j] = 0;
		}
	}
	
	for (i = 0; i <size; i++) { //���� ���� �� ���� �س����� 
		arr[y][x] = value++;
		x += 1;
		if (i == size - 1) x -= 1;
	}
	//y������ ������ 
	for (i = size-1; i>0; i--) { //size-1�� �ݺ� 
		//y������ �ѹ�, x������ �ѹ��� ���� ����� 
		for (j = 1; j <= i; j ++) { //i��ŭ �ݺ��ؾ� ������ �� �� ����. 
			y += direction;
			arr[y][x] = value++;
		}
		direction *= -1; //������ �ݴ�� ��ȯ�Ǿ�� �ϴϱ�  
		for (j = 1; j <= i; j ++) {
			x += direction;
			arr[y][x] = value ++;
		}
	}
	
	for (i=0; i <size; i ++) {
		for (j=0; j <size; j ++) {
			printf ("%3d ", arr[i][j]);
		}
		printf ("\n");
	} printf ("*******************************\n");
}
	return 0;
	
}
