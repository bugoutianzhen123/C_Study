#include<stdio.h>

int main(){
    int a[10000]={0},i;
    i=0
    while (scanf("%d",&a[i])!= EOF){
        i++;
    }
for(i=0;i<10;i++){
    printf("%d",a[i]);
}

return 0;
}