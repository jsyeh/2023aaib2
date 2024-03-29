// week06-2c.cpp H07102402 的最後一步, 把樓層i:%d 變成簡單的"\n"跳行
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		int star=i, space=n-star;
		
		for(int k=0; k<space; k++) printf(" ");
		for(int k=0; k<star; k++) printf("*");
		
		printf("\n");//printf("i:%d\n", i);
	}
}