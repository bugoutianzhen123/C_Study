#include<stdio.h>

int main(){
  float a;
  double b,c;

  a = 123.456789;
  b = a;
  c = 123.456789;
  printf("a=%f b=%lf c=%lf\n",a,b,c);
  return 0;
}