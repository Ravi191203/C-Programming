//PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>
#include<conio.h>
void main()
 {
  int n,k=2,rem,flag=1;
  clrscr();
  printf("Enter a number\n");
  scanf("%d",&n);
   if(n==1)
    {
     printf("it is a composite number\n");
     exit(0);
    }

   while(k<n && flag==1)
    {
     rem=n%k;
       if(rem==0)
	{
	 flag=0;
	}
       k++;
    }
      if(flag==1)
       {
	 printf("It is a prime number\n");
       }

      else
       {
	printf("It is not a prime number\n");
       }
    getch();

 }