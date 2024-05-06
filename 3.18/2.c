#include<stdio.h>

int main(){
int x,b0,b1,b2;

printf("please input an integer x: ");
scanf("%d",&x);

b2 = x/100;
b1 = (x - b2*100)/10;
b0 = x % 10;

printf("bit2=%d, bit1=%d, bit0=%d\n",b2,b1,b0);
return 0;
}