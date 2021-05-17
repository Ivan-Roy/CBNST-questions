#include<stdio.h>
void main()
{
 int n;
 printf("Enter the number of unknown variables\n");
 scanf("%d",&n);
 float c,sum=0.0;
 float a[n][n+1],x[10];
 printf("Enter the elements of the Gaussian Matrix:\n");
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<(n+1);j++)
    {
     scanf("%f",&a[i][j]);
    }
 }
 for(int i=0;i<n-1;i++)
 {
    for(int j=i+1;j<n;j++)
    {
      c=a[j][i]/a[i][i];
      for(int k=0;k<=n;k++)
      {
       a[j][k]=a[j][k]-c*a[i][k];
      }
    }
 }
 printf("Resultant matrix is:\n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<(n+1);j++)
  {
   printf("%6.4f\t",a[i][j]);
  }
  printf("\n");
 }
 int g,f;
 for(g=n-1;g>=0;g--)
 {
     sum=0;
     for(f=g+1;f<n;f++)
     {
         sum+=a[g][f]*x[f];
     }
     x[g]=(a[g][n]-sum)/a[g][g];
 }
 printf("The solutions are....\n");
 for(int i=0;i<n;i++)
 {
     printf(" %f",x[i]);
     printf("\n");
 }
}
