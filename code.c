#include<stdio.h>

void main(){
int n,sum=0;
printf("enter n:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{sum=sum+i;}
printf("\nsum of natural %d numbers is:%d",n,sum);
}