#include<stdio.h>

int main(){

int n;
int b;
printf("��������λʮ������������");
scanf("%x",&n);
while (n > 16){
  b=n%16;
  printf("%x",b);
  n=n>>4;
}

printf("%x\n",n);

return 0;
}