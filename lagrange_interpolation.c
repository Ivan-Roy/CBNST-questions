#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter the number of terms\n");
scanf("%d",&n);
float x[n],y[n],x1,x2,y1,sum=0.0,term;
printf("Enter the x terms\n");
for(int i=0;i<n;i++)
{
scanf("%f",&x[i]);
}
printf("Enter the y terms\n");
for(int i=0;i<n;i++)
{
scanf("%f",&y[i]);
}
printf("Enter the value of x\n");
scanf("%f",&x2);
for(int i=0;i<n;i++)
{
term=1.0;
for(int j=0;j<n;j++)
{
if (i!=j)
{
term=term*((x2-x[j])/(x[i]-x[j]));
}
}
sum+=term*y[i];
}
printf("The result is ==> %f\n",sum);
}
