//PROGRAM TO CONVERT DECIMAL TO BINARY USING WHILE LOOP
#include<stdio.h>
#include<conio.h>
void main()
 {
  long int n,rem,a=1,no=0;
  clrscr();
  printf("Enter a decimal number\n");
  scanf("%ld",&n);
   while(n!=0)
    {
     rem=n%2;
     no=no+rem*a;
     a=a*10;
     n=n/2;
    }
   printf("Binary value=%ld\n",no);
 getch();
 }

 /*OUTPUT
 Enter a decimal number
35
Binary value=100011  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

