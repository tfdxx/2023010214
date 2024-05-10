#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float legendre(int n, int x) {
    if (n < 0) {
        printf("error\n");
        return 0;
    } else if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        return ((2 * n - 1) * x - legendre(n - 1, x) - (n - 1) * legendre(n - 2, x)) / (float)n;
    }
}

int main() {
    int n, x;
    
    printf("请输入n和x（用逗号分隔）：");
    scanf("%d,%d", &n, &x);
    
    float result = legendre(n, x);
    
    printf("%.2f\n", result);
    
    return 0;
}


