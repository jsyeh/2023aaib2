// week06-2b.cpp H07102402 的第2步, 數一數有幾個空格、幾個星星
// 用一個很長的 for(int k=0; k<??; k++) 印出來
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int star=i, space=n-star;
		
		for(int k=0; k<space; k++) printf(" ");
		for(int k=0; k<star; k++) printf("*");
		
		printf("i:%d\n", i);
	}
}