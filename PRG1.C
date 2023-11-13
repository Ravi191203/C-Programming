//1.PROGRAM TO PERFORM QUADRATIC EQUATION

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
 {
   float a,b,c,disc,realp,imagp,root1,root2;
   clrscr();
   printf("Enter three values\n");
   scanf("%f%f%f",&a,&b,&c);

   if(a==0 && b==0 && c==0)
    {
     printf("Roots can't be determined\n");
    }
   else
       {
	 disc=(b*b)-4*a*c;

	   if(disc==0)
	     {
	      printf("Roots are real and equal\n");
	      root1=-b/(2*a);
	      root2=root1;
	      printf("root1=%f\n",root1);
	      printf("root2=%f\n",root2);
	     }

	   if(disc>0)
	     {
	     printf("Roots are real and distinct\n");
	     root1=(-b+sqrt(disc))/2*a;
	     root2=(-b-sqrt(disc))/2*a;
	     printf("Root1=%f\n",root1);
	     printf("Root2=%f\n",root2);
	     }

	   if(disc<0)
	     {
	      printf("Imaginary roots\n");
	      realp=-b/(2*a);
	      imagp=sqrt(abs(disc))/(2*a);
	      printf("Root1=%f+i%f\n",realp,imagp);
	      printf("Root2=%f-i%f\n",realp,imagp);
	     }

       }

    getch();

 }






 /* OUTPUT

1) Enter three values
1
5
6
Roots are real and distinct
Root1=-2.000000
Root2=-3.000000

2)Enter three values
1
5
6
Roots are real and distinct
Root1=-2.000000
Root2=-3.000000

3)Enter three values
5
3
2
Imaginary roots
Root1=-0.300000+i0.556776
Root2=-0.300000-i0.556776 */


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




















