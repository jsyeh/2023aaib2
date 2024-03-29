#include <stdio.h> //SLJ-Looping-004
int main()
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	printf("%d", a); //train head
	for(int i=1; i<n; i++){
		a *= b;
		printf(",%d", a);
	}
}