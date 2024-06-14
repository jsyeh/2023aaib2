//SOIT106_ADVANCE_011
#include <stdio.h>
int main()
{
	char s[10];
	scanf("%s", s);
	int ans = 0;
	if(s[0]=='1') ans += 8;
	if(s[1]=='1') ans += 4;
	if(s[2]=='1') ans += 2;
	if(s[3]=='1') ans += 1;
	printf("%d\n", ans);	

}