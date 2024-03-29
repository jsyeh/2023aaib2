#include <stdio.h>//week06-3.cpp
int main() //SLJ-Looping-003
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	printf("%d", a); //train head
	for(int i=1; i<n; i++){
		a += b;
		printf(",%d", a);//others
	}
}