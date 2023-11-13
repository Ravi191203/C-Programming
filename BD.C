//PROGRAM TO CONVERT BINARY NUMBER INTO DECIMAL

#include<stdio.h>
#include<conio.h>
void main()
 {
 long int n,rem;
 int d,j=1,dec=0;
 clrscr();
 printf("Enter binary number\n");
 scanf("%ld",&n);
  while(n!=0)
   {
     rem=n%10;
     d=j*rem;
     dec=dec+d;
     j=j*2;
     n=n/10;
   }
 printf("Decimal number is %d\n",dec);
 getch();
 }
 /*OUTPUT
 Enter binary number
1010111                                                                         
Decimal number is 87  */
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
