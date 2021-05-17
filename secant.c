#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-5*x+1
void main()
{
float x1,x2,x3,f1,f2;
int n,i=1;
float error;
printf("Input the initial guesses\n");
scanf("%f%f",&x1,&x2);
printf("Input the max iterations allowed\n");
scanf("%d",&n);
printf("Enter the tolerable error\n");
scanf("%f",&error);
do
{
x1=x2;
x2=x3;
f1=f(x1);
f2=f(x2);
printf("At iteration %d root is %f\n",i,x3);
x3=(x1*f2-x2*f1)/(f2-f1);
if(fabs(x3-x2)<error)
{
 printf("After %d iterations root is %f\n",i,x3);
 return 0;
}
i++;
}while(i<=n);
}
