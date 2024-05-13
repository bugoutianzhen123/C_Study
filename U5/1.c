#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
if (n > 0){
    printf("%d是正数\n",n);
}else if(n < 0){
    printf("%d是负数\n",n);
}else{
    printf("%d为0\n");
}

if (n % 2){
    printf("%d是奇数\n",n);
}else{
    printf("%d是偶数\n",n);
}
    return 0;
}