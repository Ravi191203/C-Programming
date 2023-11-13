//PROGRAM TO
#include<stdio.h>
#include<conio.h>
void main()
{
 long int n,i,sum=0,num,r,sum1=0;
 clrscr();
 printf("Enter n value\n");
 scanf("%ld",&n);
  while(n>0)
   {
    r=n%10;
    sum=sum+r;
    n=n/10;
   }

  while(sum>0)
   {
    r=sum%10;
    sum1=sum1+r;
    sum=sum/10;
   }

 printf("%ld",sum1);
getch();

}
