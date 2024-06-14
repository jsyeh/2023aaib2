//SOIT106_ADVANCE_012
#include <stdio.h>
int main()
{
	int n;
	int a[10] = {};
	while( scanf("%d", &n)==1 ){
		if(n==0) break;
		
		a[n]++;
	}
	scanf("%d", &n);
	printf("%d\n", a[n]);

}