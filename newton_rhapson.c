#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-3*x-5
#define g(x) 3*x*x-3
void main()
{
 float x,x0,x1,x2,f1,f2,f3,g1,a,b,error;
 int n,i=1;
 do
 {
  printf("Enter the values of x1 and x2\n");
  scanf("%f%f",&x1,&x2);
  f1=f(x1);
  f2=f(x2);
  if(f1*f2<0)
  {
   a=x1;
   b=x2;
   break;
  }
 }while(f1*f2>0);
 if (fabs(f1)<fabs(f2))
 {
     x0=a;
 }
 else
 {
     x0=b;
 }
 printf("Enter the tolerable error\n");
 scanf("%f",&error);
 printf("Enter the max. number of iterations\n");
 scanf("%d",&n);
 while(i<=n)
 {
     f3=f(x0);
     g1=g(x0);
     x=x0-(f3/g1);
     printf("At iteration %d root is %f\n",i,x);
     if(fabs(x-x0)<error)
     {
      printf("After %d iterations root is %f\n",i,x);
      break;
     }
     x0=x;
     i++;
 }
}
