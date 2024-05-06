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

// int erxiang(int x, int y){
//     int result = 1,i,n;
//     if (x == 0) return 1;
//     for (n=y,i=0;i<x;i++,n--){
//         result*=n;
//     }
//     for (n=y-x,i=0;i<x;i++,n--){
//         result/=n;
//     }
//     for (n=x,i=0;i<x;i++,n--){
//         result/=n;
//     }
//     //result = jiecheng(y)/(jiecheng(y-x)*jiecheng(x));
//     return result;
// }

int main()
{
  int n,i,j;
  scanf("%d",&n);
  for (i=0;i<=n;i++){
      for (j=0;j<i+1;j++){
         printf("%d ",erxiang(j,i));
      }
      puts("");
  }
  return 0;
//printf("%d\n",erxiang(1,13));
}