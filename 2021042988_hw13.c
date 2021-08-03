#include <stdio.h>

int main (void) {
	
	int arr[20][20];
	int i, j, size;
	int x, y, direction;
	int value = 1;
	int yes = 1;
	while (yes) {
	
	printf ("크기를 입력해주세요(MAX : 20) : ");
	scanf ("%d", &size);
	while (size > 20 || size < 0) {
		printf ("유효한 수를 입력해주세요.\n");
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
	
	for (i = 0; i <size; i++) { //가장 위에 줄 먼저 해놔야함 
		arr[y][x] = value++;
		x += 1;
		if (i == size - 1) x -= 1;
	}
	//y축으로 내려가 
	for (i = size-1; i>0; i--) { //size-1번 반복 
		//y축으로 한번, x축으로 한번씩 숫자 써야함 
		for (j = 1; j <= i; j ++) { //i만큼 반복해야 끝까지 갈 수 있음. 
			y += direction;
			arr[y][x] = value++;
		}
		direction *= -1; //방향이 반대로 전환되어야 하니까  
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
