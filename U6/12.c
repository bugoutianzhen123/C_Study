#include<stdio.h>

int main(){
    int man;
   for(man = 'a';man<= 'd';man++){
    if(((man != 'a') +(man == 'c') +(man == 'd') +(man != 'd')) == 3){
        printf("%c ",man);
    }
   }

   return 0;
}