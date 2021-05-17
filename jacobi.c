#include<stdio.h>
#include<math.h>
#define f1(x,y,z) (17-y+2*z)/20
#define f2(x,y,z) (-18-3*x+2)/20
#define f3(x,y,z) (25-2*x+3*y)/20

void main()
{
 float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3,e;
 int count=1;
 printf("Enter the max. error tolerable\n");
 scanf("%f",&e);
 do
 {
   x1=f1(x0,y0,z0);
   y1=f2(x0,y0,z0);
   z1=f3(x0,y0,z0);
   printf("%d\t%0.4f\t%0.4f\t%0.4f\n",count,x1,y1,z1);
   e1=fabs(x0-x1);
   e2=fabs(y0-y1);
   e3=fabs(z0-z1);
   count++;
   x0=x1;
   y0=y1;
   z0=z1;
 }while(e1>e && e2>e && e3>e);
 printf("After %d iterations solution is\nx=%0.3f \ty=%0.3f \tz=%0.3f\n",count,x1,y1,z1);
}
