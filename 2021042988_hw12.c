#include <stdio.h>
#include <stdlib.h>
void Push(int num, int *stack, int *top, int size) {
		if (*top == size-1){
			printf ("스택이 가득 찼습니다.\n");
			return;
		}
		stack[++(*top)] = num;

}
void Pop(int *top) {
	if (*top == -1)
		printf ("스택 안에 원소가 없습니다.\n");
	else{
		(*top) -= 1;
}
}
int Top(int *stack, int *top) {
	if (*top == -1) {
		printf("스택 안에 원소가 없습니다.\n");
		return -1;
	}
	return stack[(*top)];
}
int main(void) {

	int *stack;
	int top = -1;
	int yes = 1;
	int size;
	int n, n2;
	
	printf ("스택의 크기를 입력하시오 : ");
	scanf("%d", &n);
	stack = (int *)malloc(sizeof(int) * n);
	size = n;
	while (yes) {
		scanf("%d", &n);
		switch (n) {
			case 0 :
				printf("\n%d\n", top+1);
				printf("%d\n", Top(stack, &top));
				for (n2=top; n2>=0; n2--) {
					printf ("%d ", stack[n2]);
				}
				printf ("\n");
				yes = !yes; 
				break;
			case 1 :
				scanf("%d", &n2);
				Push (n2, stack, &top, size);
				break;
			case 2 :
				Pop (&top);
				break;
			default :
				printf ("올바르지 않은 입력입니다.(0, 1, 2 중 입력)\n");		
		}
	}
	free(stack);
	return 0;

}
