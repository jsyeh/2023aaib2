//week08-5b.cpp (SLJ-Looping-001) 階乘計算 : 輸入n(>=0)，輸出 n! 
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans = 1;
	for(int i=1; i<=n; i++){
		ans *=i;
	}
	printf("%d", ans);
}