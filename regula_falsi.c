#include<stdio.h>
#include<math.h>
#define f(x) cos(x)-3*x+1

void main()
{
 int count=0,n;
 float x0,x1,x2,f0,f1,f2,e;
 printf("Enter the initial guess\n");
 scanf("%f%f",&x0,&x1);
 printf("Enter the max. error tolerable\n");
 scanf("%f",&e);
 printf("Enter max. iterations possible\n");
 scanf("%d",&n);
 do
 {
  f0=f(x0);
  f1=f(x1);
  f2=f(x2);
  x2=((x0*f1)-(x1*f0))/(f1-f0);
  if(f0*f2<0)
  {
      x1=x2;
      f1=f2;
  }
  else
  {
    x0=x2;
    f0=f2;
  }
  count+=1;
  printf("At iteration %d value of x2=%f\t and f(x2)=%f\n",count,x2,f2);
 }while(fabs(f2)>e);
 printf("Root is %f\n",x2);
}
