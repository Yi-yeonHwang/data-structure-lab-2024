#include <stdio.h>
#define MAX_SIZE 10
int var;

void sub(int x, int arr[]) {
	x = 10;
	arr[0] = 10;
}
void main()
{
	
	int list[MAX_SIZE];
	int var = 0;
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d\n", var, list[0]);
}