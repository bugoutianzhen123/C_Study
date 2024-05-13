#include<stdio.h>
#include<string.h>
#define N 1

int main(){
    char str[128],i;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if('a'<= str[i] && 'z'>= str[i])
      str[i]=((str[i]+N-'a')%26 + 'a');
      if('A'<= str[i] && 'Z'>= str[i])
      str[i]=((str[i]+N-'A')%26 + 'A');
    }
    printf("%s",str);
}