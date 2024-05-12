#include<stdio.h>

int main(){
    long int i,j,s=0,n,a;
    printf("请输入n和a：\n");
    scanf("%d %d",&n,&a);
    for(i=1,j=a;i<=n;i++){
      s+=j;
      j=j*10+a;
    }
    printf("%d",s);
    return 0;
}