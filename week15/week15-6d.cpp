// week15-6d.cpp SOIT108_Advance_004
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int ans=0;
	for(int i=1; i<=n; i++){
		ans += i * 11;
	}
	printf("%d", ans);
}