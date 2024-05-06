#include<stdio.h>

int main(){

int i,j=0;
   for (i=0; i < 256;i++){
     printf("%d: %c  ",i,i);
     j++;
     if (j == 10) {
     printf("\n");
	  j = 0;
	 }
   }

  return 0;
}