#include<stdio.h>
#include<math.h>

int main(){
  int n,i=0,a[3]={0,0,0};
  printf("number:");
  scanf("%d",&n);
  if(n%3 == 0){i++,a[i-1]=3;}
  if(n%5 == 0){i++,a[i-1]=5;}
  if(n%7 == 0){i++,a[i-1]=7;}

  switch (i){
    case 0 :printf("不能被3，5，7任一个整除 \n");break;
    case 1 :printf("能被其中一个数%d整除 \n",a[0]); break; 
    case 2 :printf("能被其中两个数%d,%d整除 \n",a[0],a[1]); break;
    case 3 :printf("能同时被3，7，5整除\n"); break;
  }

    return 0;
}
