#include<stdio.h>
#define R 4
#define L 4

void GetNumGroupFromFile(int *a,char str[])//对应数组指针，文件名)
{
    int i;
    FILE *fp = NULL;
    fp = fopen(str,"r");
    for (i=0;i< R*L;i++){
    fscanf(fp,"%d",a+i);
    }
    fclose(fp);
}

int main(){
    int a[R][L]={0},i;
    GetNumGroupFromFile(a[0],"input12.txt");

    for (i=0;i< R*L;i++){
    printf("%2d ",*(a[0]+i));
    if ((i+1)% R == 0) printf("\n");
    }

     return 0;
}