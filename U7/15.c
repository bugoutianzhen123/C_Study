#include<stdio.h>
#define N 6

int main(){
    int a[N][N]={0};
    int i,r,l,maxr=N,minr=0,maxl=N,minl=0,dir=0;
    r=0;
    l=0;
    dir=6;
    for(i=0;i<N*N;i++){
        a[r][l]=i+1;
        switch(dir){
            case 6:{
                if(l== maxl - 1){
                    dir = 2;
                    minr ++;
                    r++;
                }else{
                    l++;
                }
            }break;
            case 2:{
                if(r== maxr - 1){
                    dir = 4;
                    maxl--;
                    l--;
                }else{
                    r++;
                }
            }break;
            case 4:{
                if(l== minl){
                    dir = 8;
                    maxr--;
                    r--;
                }else{
                    l--;
                }
            }break;
            case 8:{
                if(r== minr){
                    dir = 6;
                    minl++;
                    l++;
                }else{
                    r--;
                }
            }break;
        }
    }

    for(i=0;i<N*N;i++){
        printf("%2d ",*(a[0]+i));
        if((i+1)%N == 0){
            puts("");
        }
    }

    return 0;
}

