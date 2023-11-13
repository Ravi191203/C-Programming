//PROGRAM TO GENERATE ARMSTRONG NUMBER
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum,num,r;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
printf("The Armstrong Numbers upto %d are\n",n);
for(i=1;i<n;i++)
 {
   num=i;
   sum=0;
   while(num>0)
    {
      r=num%10;
      sum=sum+(r*r*r);
      num=num/10;
     }

  if(sum==i)
  printf("%d\n",i);
 }
getch();
}


/* OUTPUT
Enter n value
500
The Armstrong Numbers upto 500 are
1
153
370
371
407

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
