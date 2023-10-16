#include <stdio.h>
int a;
static int b;

void func(){
	a += 1;
	b += 1;
}
int main()
{
	func();
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	return 0;
}