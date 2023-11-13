/*PROGRAM TO FIND MAXIMUM AND MINIMUM OF N NUMBERS
WITHOUT USING ARRAYS*/

#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,max,min,i=1;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
printf("Enter numbers\n");
 while(i<=n)
  {
   scanf("%d",&num);
   if(i==1)
    min=max=num;
     if(min>num)
       min=num;
     if(max<num)
       max=num;
       i++;
   }
printf("Minimum number=%d\n",min);
printf("Maximum number=%d\n",max);
getch();
}

/*OUTPUT
Enter n value
8                                                                               
Enter numbers                                                                   
6                                                                               
3                                                                               
4                                                                               
1                                                                               
9                                                                               
11                                                                              
18                                                                              
2                                                                               
Minimum number=1
Maximum number=18  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



