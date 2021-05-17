#include<stdio.h>
#include<math.h>
#define f(x) 1/(1+pow(x,2))
void main()
{
int n;
printf("Enter the number of parts in which the function is divided into..\n");
scanf("%d",&n);
float a,b;
printf("Enter the lower and upper limit..\n");
scanf("%f%f",&a,&b);
float h,x[n+1],y[n+1],sum=0.0,sum1=0.0,sum2=0.0;
h=(b-a)/n;
for(int i=0;i<=n;i++)
{
 x[i]=a+i*h;
 y[i]=f(x[i]);
}
printf("Resultant table is..\n\n");
printf("X :");
for(int i=0;i<=n;i++)
{
 printf("%6.4f  ",x[i]);
}
printf("\n");
printf("Y :");
for(int i=0;i<=n;i++)
{
 printf("%6.4f  ",y[i]);
}
for(int i=1;i<=n-1;i++)
{
    if(i%2==0)
    {
        sum1+=y[i];
    }
    else
    {
        sum2+=y[i];
    }
}
sum+=(h/3)*((y[0]+y[n])+((4*sum2)+(2*sum1)));
printf("\n\nFinal result is==>%6.4f\n",sum);
}
