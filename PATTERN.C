#include<stdio.h>
int main()
{
int N=5,i,j,min;
printf("Value of N:%d\n",N);
for(i=1;i<=N;i++)
{
for(j=1;j<=N;j++)
{
min=i<j ? i : j;
printf("%d",N-min+1);
}
printf(" \n");
}
return 0;
}