//SOIT106_ADVANCE_009
#include <stdio.h>
int f()
{
	int n;
	scanf("%d", &n);
	while(n>0){
		printf("%d", n%10);
		n = n / 10;
	}
	printf("\n");
	return 0;
}
int main()
{
	f();
}