#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,p,a=0;
  clrscr();
  printf("Enter number of units\n");
  scanf("%d",&n);
   if(n>500)
    {
     r=n-500;
     n=n-r;
     p=r*4;
     a=a+p;
    }

      if(n>300)
       {
	r=n-300;
	n=n-r;
	p=r*3;
	a=a+p;
       }

	if(n>100)
	 {
	  r=n-100;
	  n=n-r;
	  p=r*2;
	  a=a+p;
	 }

	 if(n<=100)
	  {
	   r=n;
	   p=r*1;
	   a=a+p;
	  }
   printf("Amount=%d\n",a);
   getch();
}


/*OUTPUT
Enter number of units
535
Amount=1240 */




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
  */




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

