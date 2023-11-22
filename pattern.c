/*Inverted half pyramid using *
* * * * *
* * * *
* * * 
* *
*
*/
#include<stdio.h>
void main()
{
	int limit,i,j;
	printf("Enter the limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		for(j=i;j<=limit;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
