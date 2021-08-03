#include <stdio.h>
#include <stdlib.h>
void Push(int num, int *stack, int *top, int size) {
		if (*top == size-1){
			printf ("������ ���� á���ϴ�.\n");
			return;
		}
		stack[++(*top)] = num;

}
void Pop(int *top) {
	if (*top == -1)
		printf ("���� �ȿ� ���Ұ� �����ϴ�.\n");
	else{
		(*top) -= 1;
}
}
int Top(int *stack, int *top) {
	if (*top == -1) {
		printf("���� �ȿ� ���Ұ� �����ϴ�.\n");
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
	
	printf ("������ ũ�⸦ �Է��Ͻÿ� : ");
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
				printf ("�ùٸ��� ���� �Է��Դϴ�.(0, 1, 2 �� �Է�)\n");		
		}
	}
	free(stack);
	return 0;

}
