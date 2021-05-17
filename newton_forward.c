#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter the number of terms\n");
scanf("%d",&n);
float a[n][n+1],u,u1,y,x;
printf("Enter the terms w.r.t x\n");
for(int i=0;i<n;i++)
{
 scanf("%f",&a[i][0]);
}
printf("Enter the terms w.r.t y\n");
for(int i=0;i<n;i++)
{
 scanf("%f",&a[i][1]);
}
for(int j=2;j<n+1;j++)
{
 for(int i=0;i<n-j+1;i++)
 {
   a[i][j]=a[i+1][j-1]-a[i][j-1];
 }
}
printf("Enter the value of x to get the corresponding value of y\n");
scanf("%f",&x);
printf("The difference table is...\n");
for(int i=0;i<n;i++)
{
 for(int j=0;j<=n-i;j++)
 {
  printf("%4.3f ",a[i][j]);
 }
 printf("\n");
}
u=(x-a[0][0])/(a[1][0]-a[0][0]);
y=a[0][1];
u1=u;
int fact=1;
for(int i=2;i<=n;i++)
{
 y+=(u1*a[0][1])/fact;
 fact*=i;
 u1*=(u-(i-1));
}
printf("value of y is %f\n",y);
}
