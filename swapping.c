#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
int b,i;
char e[20],d[20],g;
clrscr();
printf("enter the string");
scanf("%s",e);
b=strlen(e);
d[b]='\0';
//c=b-1;
for(i=1;i<b;i+=2)
{
g=e[i];
//e[i]=e[i+1];
d[i-1]=g;
g=e[i-1];
d[i]=g;
}
printf("\n after swapping:%s",d);
getch();
return 0;

}
