#include<stdio.h>
int main()
{
int i,j,r;
printf("����Ϊ��");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
	for(j=1;j<=i;j++) printf("%d\t",j); 
printf("\n");
}


return 0;

}