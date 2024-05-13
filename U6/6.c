#include<stdio.h>
#include<math.h>

int main(){
    int i, n = 1;
    float x, xm, s;
    scanf("%f", &x);
    xm = x;
    s = x;
    for (i = 1; fabs(xm) >= 1e-5; i += 2) {
        xm *= -x * x/((i + 1) * (i + 2));
        s += xm;
    }
    printf("sin(x) = %f, num = %d", s, i / 2);
    return 0;
}