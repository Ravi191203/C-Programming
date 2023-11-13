/*PROGRAM TO GENERATE PRIME NUMBER UPTO N NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
 {
  int j,i,flag=0,n,count=0;
  clrscr();
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Prime numbers are\n");
  for(j=2;j<=n;j++)
   {
    flag=0;
      for(i=2;i<j;i++)
       {
	if(j%i==0)
	 {
	  flag=1;
	  break;
	 }

       }
       if(flag==0)
	{
	  printf("%d\n",j);
	  count++;
	 }
   }
   printf("Number of prime =%d\n",count);
   getch();
 }

 /*OUTPUT
 Enter a number
60
Prime numbers are
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
Number of prime =17*/


                                                                                
                                                                                

