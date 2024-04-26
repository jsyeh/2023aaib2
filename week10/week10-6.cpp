// week10-6.cpp SLJ-Array-003
#include <stdio.h>
int main()
{
	int down[100]; //failed
	int downN = 0;
	int now; 
	
	scanf("%d", &now); //don't use it
	
	printf("\npass:");
	while( scanf("%d",&now) == 1 ){
		if(now>=60 && now<=100) printf("%4d", now);
		if(now>=0 && now<60) down[downN++] = now;
	}
	
	printf("\ndown:");
	for(int i=0; i<downN; i++){
		printf("%4d", down[i]);
	}
}