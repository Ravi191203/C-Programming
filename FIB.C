//PROGRAM TO GENERATE FIBBONACI SERIES UPTO N NUMBERS
#include<stdio.h>
#include<conio.h>
void main()
 {
  int i=0,n,fib1=0,fib2=1,fib;
  clrscr();
  printf("Enter n value\n");
  scanf("%d",&n);
  printf("Fibonacci series are:\n");
  printf("%d  %d",fib1,fib2);
  for(i=2;i<n;i++)
    {
     fib=fib1+fib2;
     fib1=fib2;
     fib2=fib;
     printf(" %d ",fib);
     }
  getch();
 }

/*OUTPUT
Enter n value
10                                                                              
Fibonacci series are:                                                           
0  1 1  2  3  5  8  13  21  34 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

