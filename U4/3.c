#include<stdio.h>
#include<math.h>

int main(){
  float r,s,c;
  float p = acos(-1);
  //printf("%f\n",p);
  scanf("%f",&r);
  //printf("%f\n",r);
  s = p*r*r;
  c = 2*p*r;

  printf("���:%f   �ܳ�:%f\n",s,c);
  return 0;
}