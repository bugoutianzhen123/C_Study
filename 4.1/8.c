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
    case 0 :printf("���ܱ�3��5��7��һ������ \n");break;
    case 1 :printf("�ܱ�����һ����%d���� \n",a[0]); break; 
    case 2 :printf("�ܱ�����������%d,%d���� \n",a[0],a[1]); break;
    case 3 :printf("��ͬʱ��3��7��5����\n"); break;
  }

    return 0;
}
