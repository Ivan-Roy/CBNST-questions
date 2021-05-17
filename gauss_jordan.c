#include<stdio.h>
void main()
{
 int n;
 printf("Enter the number of unknown variables\n");
 scanf("%d",&n);
 float c;
 float a[n][n+1],x[10];
 printf("Enter the elements of the Gaussian Matrix:\n");
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<(n+1);j++)
    {
     scanf("%f",&a[i][j]);
    }
 }
 for(int i=0;i<n;i++)
 {
    for(int j=0;j<n;j++)
    {
      if(j!=i)
      {
      c=a[j][i]/a[i][i];
      for(int k=0;k<=n;k++)
      {
       a[j][k]=a[j][k]-c*a[i][k];
      }
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
 printf("Solutions are....\n");
 for(int i=0;i<n;i++)
 {
     x[i]=a[i][n]/a[i][i];
     printf(" %f",x[i]);
     printf("\n");
 }
}
