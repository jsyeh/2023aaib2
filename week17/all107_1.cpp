//SOIT107_ADVANCE_001_C
#include <stdio.h>
int f(int a,int b){
	if(a>b) return 1;
	if(a<b) return -1;
	if(a==b) return 0;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
