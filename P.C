
/*PROGRAM TO Sum of N numbers using continue statement*/

#include<stdio.h>
#include<conio.h>
void main()
 {
  int n,sum=0,i=1,num;
  clrscr();
  printf("Enter n value\n");
  scanf("%d",&n);
  printf("Enter numbers\n");
  while(i<=n)
   {
    scanf("%d",&num);
     if(num<0)
      {
       printf("Enter only positive number\n");
       continue;
      }
     sum=sum+num;
     i++;
    }
  printf("Sum=%d\n",sum);
getch();
 }
/*OUTPUT
Enter n value
5
Enter numbers
1
6
9
5
8
Sum=29

Enter n value
5
Enter numbers
1
3
-5
Enter only positive number
4
7
6
Sum=21 */


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
