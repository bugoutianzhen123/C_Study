#include<stdio.h>
#define N 3

int mian(){
   int num[N],i,j,m;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
for (i = 0;i<N-1;i++){
    for(j=0;j<N-1-i;j++){
        if (num[j]>num[j+1]){
            m = num[j];
            num[j] = num[j+1];
            num[j+1] = m;
        }
    }
}
for (i=0;i<N;i++){
    printf("%d ",num[i]);
}
return 0;
}
