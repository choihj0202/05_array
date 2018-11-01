#include <stdio.h>
#include <stdlib.h>
#define NUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nums[NUM], i;
	
	printf("INPUT %d NUMBERS : ", NUM);
	
	for (i=0; i<NUM; i++)
	{
		scanf("%d", &nums[i]);
	}
	
	printf("SORTED NUMBERS ARE : ");
	for (i=0; i<NUM; i++)
	{
		printf("%d ", nums[i]);
	}
	
	return 0;
}
