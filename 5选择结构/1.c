#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
if (n > 0){
    printf("%d������\n",n);
}else if(n < 0){
    printf("%d�Ǹ���\n",n);
}else{
    printf("%d�Ȳ�������Ҳ���Ǹ���\n");
}

if (n % 2){
    printf("%d������\n",n);
}else{
    printf("%d��ż��\n",n);
}
    return 0;
}