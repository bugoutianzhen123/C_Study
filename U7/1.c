#include<stdio.h>

<<<<<<< HEAD
void GetNumGroupFromFile(int *a,char str[])//对应数组指针，文件名
{
    int i;
    FILE *fp = NULL;
    fp = fopen(str,"r");
=======
void GetNumGroupFromFile(int *a){
    int i;
    FILE *fp = NULL;
    fp = fopen("input1.txt","r");
>>>>>>> 1b4a9419e126ce17fd722e772459e301be301837
    for (i=0;i<20;i++){
    fscanf(fp,"%d",a+i);
    }
    fclose(fp);
}

int main(){
    int num[20],i,n=0,s=0;
<<<<<<< HEAD
    char *str="input1.txt";
    GetNumGroupFromFile(num,str);
=======
    GetNumGroupFromFile(num);
>>>>>>> 1b4a9419e126ce17fd722e772459e301be301837
    for(i=0;i<20;i++){
      if(num[i]>=0){
        n++;
        s+=num[i];
      }
    }
    printf("个数：%d，总和：%d",n,s);
    return 0;
}