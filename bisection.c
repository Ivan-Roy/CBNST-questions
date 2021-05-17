#include<stdio.h>
#include<math.h>
float func(float x)
{
    return(x*x-4*x-10);
}
float bisect(float *x,float a,float b,int *count)
{
    *x=(a+b)/2;
    (*count)++;
    printf("After %3d iterations X is=%6.4f\n",*count,*x);
}
void main()
{
    printf("Expression taken==>x*x-4*x-10\n\n");
    float a,b,x,x1,error;
    int count=0,n;
    printf("Enter the values of a1 and b1\n");
    scanf("%f%f",&a,&b);
    printf("Enter the error accepted\n");
    scanf("%f",&error);
    printf("Enter the number of iterations\n");
    scanf("%d",&n);
    bisect(&x,a,b,&count);
    do
    {
        if(func(a)*func(b)<0)
        {
            b=x;
        }
        else
        {
            a=x;
        }
        bisect(&x1,a,b,&count);
        if(fabs(x1-x)<error)
        {
            printf("After %3d iterations root is %6.4f",count,x1);
            return 0;
            break;
        }
        x=x1;
    }while(count<n);
}
