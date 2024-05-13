#include<stdio.h>

void GetNumGroupFromFile(int *a,char str[])//对应数组指针，文件名
{
    int i;
    FILE *fp = NULL;
    fp = fopen(str,"r");
    for (i=0;i<20;i++){
    fscanf(fp,"%d",a+i);
    }
    fclose(fp);
}

int main(){
    int num[20],i,n=0,s=0;
    char *str="input1.txt";
    GetNumGroupFromFile(num,str);
    for(i=0;i<20;i++){
      if(num[i]>=0){
        n++;
        s+=num[i];
      }
    }
    printf("个数：%d，总和：%d",n,s);
    return 0;
}