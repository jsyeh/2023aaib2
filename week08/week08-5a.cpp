//week08-5a.cpp  (SLJ-Looping-005) 平均成績
#include <stdio.h>
int main()
{
	int n;
	float ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int a;
		scanf("%d", &a);
		ans += a;
	}
	printf("%.2f", ans/n);
}