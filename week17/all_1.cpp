// SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	int b = n; //backup
	while(n>0){
		ans = ans * 10 + n%10;
		n = n / 10;
	}
	
	
	printf("%d+%d=%d\n", b, ans, b+ans);
}