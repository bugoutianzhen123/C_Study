#include<stdio.h>
#include<string.h>

void sortmax_min_ji(char str[]){
   int i,j,k;
   for(i=1;i<strlen(str)-1;i+=2){
    for(j=1;j<strlen(str)-1-i;j+=2){
        if(j== strlen(str)-2)break;
        if(str[j]<str[j+2]){
            k=str[j];
            str[j]=str[j+2];
            str[j+2]=k;
        }
    }
   }
}

void sortmin_max_ou(char str[]){
   int i,j,k;
   for(i=0;i<strlen(str)-1;i+=2){
    for(j=0;j<strlen(str)-1-i;j+=2){
        if(j== strlen(str)-2)break;
        if(str[j]>str[j+2]){
            k=str[j];
            str[j]=str[j+2];
            str[j+2]=k;
        }
    }
   }
}

void sort(char str[]){
    sortmax_min_ji(str);
    sortmin_max_ou(str);
}

int main(){
    char str[127];
    int i;
    scanf("%s",str);
    sort(str);
    //for(i=0;i<strlen(str);i+=2);
    printf("%s\n",str);
    for(i=0;i<strlen(str);i+=2){
        printf("%c ",str[i]);
    }
    puts("");
    for(i=1;i<strlen(str);i+=2){
        printf(" %c",str[i]);
    }
    puts("");
    return 0;
}