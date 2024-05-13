#include<stdio.h>

void GetNumGroupFromFile(int *a,char str[])//对应数组指针，文件名)
{
    int i;
    FILE *fp = NULL;
    fp = fopen(str,"r");
    for (i=0;i<5*5;i++){
    fscanf(fp,"%d",a+i);
    }
    fclose(fp);
}

int main(){
    int a[5][5];
    int i,s1=0,s2=1;
    GetNumGroupFromFile(a[0],"input5.txt");
    for(i=0;i<5;i++){
        s1+=a[i][i];
        if((4-i)!=i)s1+=a[i][4-i];
    }

    for(i=0;i<5;i+=2){
        s2*=a[i][i];
        if((4-i)!=i)s2*=a[i][4-i];
    }

    printf("1、%d\n2、%d\n",s1,s2);

    return 0;
}