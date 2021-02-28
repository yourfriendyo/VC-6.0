#include<stdio.h>
int main()
{
int i,j,t,a[10];
printf("input 10 numbers:\n");
for(j=0;j<10;j++)
scanf("%d",&a[j]);
printf("\n");
for(i=0;i<9;i++)
{
	for(j=0;j<9;j++)
		if(a[j]>a[j+1]) 
		{t=a[j];
		 a[j]=a[j+1];
		 a[j+1]=t;
		}
    printf("the sorted numbers:\n");
}
}