#include<stdio.h>
#include<conio.h>

int main()
{
char ch,ch1,ch2;

ch = getche();
putchar('\n');
ch1 = 'z' - ('z' - ch + 1) % 26;
ch2 = 'a' + (ch - 'a' + 1) % 26;
printf("ch1=%c,ch2=%c\n",ch1,ch2);


return 0;
}