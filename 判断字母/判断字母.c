#include <stdio.h>
int main()
{
char c;
printf("����һ���ַ�");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("%c����ĸ",c);
else
printf("%c������ĸ",c);

	
	
return 0;
}