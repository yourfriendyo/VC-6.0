#include<stdio.h>
int main()
{
char c;
printf("ÊäÈëUÏÔÊ¾´óÐ´×ÖÄ¸£¬ÊäÈëiÏÔÊ¾Ð¡Ð´×ÖÄ¸£º");
scanf("%c",&c);
if(c>='A'&&c<='Z')
{
for(c='A';c<='Z';++c)
printf("%c",c);
printf("\n");
}
else if(c>='a'&&c<='z')
{
for(c='a';c<='z';++c)
printf("%c",c);
printf("\n");

}
else
printf("fuck!¹ö¶¿×Ó!");


return 0;
}