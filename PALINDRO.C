/*PROGRAM TO CHECK WHETHER THE GIVEN NUMBER
IS PALINDROME OR NOT AND ALSO FIND THE NUMBER
OF DIGIT AND SUM OF THE DIGIT*/

#include<stdio.h>
#include<conio.h>
void main()
 {
  int n,rem,rev=0,count=0,temp,sum=0;
  clrscr();
  printf("Enter the Number\n");
  scanf("%d",&n);
  temp=n;
  do
   {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    count++;
    sum=sum+rem;
   }
   while(n!=0);

  if(temp==rev)
    printf("It is a palindrome\n");
  else
    printf("It is not a palindrome\n");
 printf("Sum of the digit=%d\n",sum);
 printf("Number of the digit=%d\n",count);
 getch();
}

/*OUTPUT
Enter the Number
563
It is not a palindrome
Sum of the digit=14
Number of the digit=3

Enter the Number
434                                                                             
It is a palindrome                                                              
Sum of the digit=11                                                             
Number of the digit=3                                                           
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
























