#include<stdio.h>

int main(){
  char x1[8], x2[8],x3[8], mid[8];

  scanf("%s %s %s",&x1 ,&x2 ,&x3);

  if(x1[0] > x2[0]){
	  if(x1[0] > x3[0]){
		  if(x2[0] > x3[0]){
             printf("%s %s %s\n",x3,x2,x1);
		  }else{
			  printf("%s %s %s\n",x2,x3,x1);
		  }
	  }else{
          printf("%s %s %s\n",x2,x1,x3);
	  }
  }else{
	  //x2 > x1
	  if(x2[0] > x3[0]){
		  if(x1[0] > x3[0]){
			  printf("%s %s %s\n",x3,x1,x2);
		  }else{
			  printf("%s %s %s\n",x1,x3,x2);
		  }
			 
	  }else{
		  printf("%s %s %s\n",x1,x2,x3);
	  }
  }

  return 0;
}