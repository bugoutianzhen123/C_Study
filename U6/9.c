#include<stdio.h>

int main(){
    int i,n,s=0;
    scanf("%d",&n);
    for(i=0;n>0;i++){
        s+=n%10;
        n/=10;
    }
    printf("%d",s);

    return 0;
}