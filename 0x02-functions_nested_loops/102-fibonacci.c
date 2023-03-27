#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int i;
	int t1 = 1;
	int t2 = 2;
	int nextTerm = t1 + t2;
	
	printf("%d, %d, ", t1, t2);
	for (i = 3; i <= 50; ++i)
      	{
		printf("%d, ", nextTerm);
	        t1 = t2;
	        t2 = nextTerm;
	        nextTerm = t1 + t2;
	 }
	printf("\n");
	 return 0;
}
