#include<stdio.h>
#include<math.h>
//f(x) x^3+x-5=0
#define precision 0.0001
#define g(x) pow((5-x),(0.3333))
void main()
{
    int i=0,n;
    float x0,x1,error;
    printf("Enter the initial root\n" );
    scanf("%f",&x0);
    printf("Enter the max. number of iterations\n");
    scanf("%d",&n);
    begin:
        x1=g(x0);
        error=x1-x0;
        if(fabs(error)<precision)
        {
            printf("After %d iterations the real root of this equation is %6.4f\n",i,x1);
        }
        else
        {
            x0=x1;
            i++;
            if(i<n)
            {
                printf("At %d iteration value is %6.4f\n",i,x1);
                goto begin;
            }
            else
            {
                printf("The process doesn't converge!!\n");
            }
        }
}
