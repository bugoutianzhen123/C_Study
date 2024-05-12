#include<stdio.h>

int main(){
    int i,j,k,t=0;
    for(i=1;i<29;i++){
        for(j=1;j<=72;j++){
            k=100-i-j;
            if(5*i+2*j+k == 150){
                t++;
                printf("%02d,%02d,%02d  ",i,j,k);
                if(t%5==0)puts("");
            }
        }
    }

    printf("%d",t);

    return 0;
}