#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  if (n<0 && n>100) printf("the score is worng");
  
  switch(n/10){
    case 1:case 2:case 3: case 4:case 5: printf("E");break;
    case 6: printf("D");break;
    case 7: printf("C");break;
    case 8: printf("B");break;
  default: printf("A");break;
  }
    return 0;
}