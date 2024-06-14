#include <stdio.h>
#include <string.h>
#include <ctype.h> // isupper(c) or islower(c)
int main()
{
	char s[20];
	scanf("%s", s); 
	///int N = strlen(s);
	//for(int i=0; i<N; i++){
	for(int i=0; s[i]!=0; i++){ // 0 is '\0' 
		char c = s[i];
		if(c>='A'&&c<='Z') c = c - 'A' + 'a';
		else if(c>='a'&&c<='z') c = c - 'a' + 'A';
		
		printf("%c", c);
	}
	printf("\n");
}