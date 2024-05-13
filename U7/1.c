#include<stdio.h>

void GetNumGroupFromFile(int *a){
    int i;
    FILE *fp = NULL;
    fp = fopen("input1.txt","r");
    for (i=0;i<20;i++){
    fscanf(fp,"%d",a+i);
    }
    fclose(fp);
}

int main(){
    int num[20],i,n=0,s=0;
    GetNumGroupFromFile(num);
    for(i=0;i<20;i++){
      if(num[i]>=0){
        n++;
        s+=num[i];
      }
    }
    printf("个数：%d，总和：%d",n,s);
    return 0;
}