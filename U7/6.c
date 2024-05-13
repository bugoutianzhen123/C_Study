#include<stdio.h>

int erxiang(int x, int y){
    int result = 1;
    if (x == 0) return 1;
    result = jiecheng(y)/(jiecheng(y-x)*jiecheng(x));
    return result;
}

int jiecheng(int x){
    int result = 1;
    if (x <= 0) return 1;
    while (x != 1){
        result*=x;
        x--;
    }
    return result;
}

void put_(int n){
    int i;
    for(i=0;i<n;i++){
        printf("  ");
    }
}


int main()
{
  int n,i,j;
  scanf("%d",&n);
  for (i=0;i<=n;i++){
    put_(n-i);
      for (j=0;j<i+1;j++){
         printf(" %2d ",erxiang(j,i));
      }
      put_(n-i);
      puts("");
  }
  return 0;
//printf("%d\n",erxiang(1,13));
}