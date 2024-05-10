#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

// 计算每月存款余额的函数
float calculateBalance(float monthlyDeposit, float annualInterestRate, int months) {
    float monthlyInterestRate = annualInterestRate / 12;
    float balance = 0;

    // 每个月计算存款余额
    int i;
    for ( i = 0; i < months; i++) {
        balance = (balance + monthlyDeposit) * (1 + monthlyInterestRate);
    }

    return balance;
}

int main() {
    float monthlyDeposit, annualInterestRate;
    int months;

    // 从键盘输入每月存款数、年利率和月份数
    printf("请输入每月存款数、年利率和月份数（用逗号分隔）：");
    scanf("%f,%f,%d", &monthlyDeposit, &annualInterestRate, &months);

    // 调用函数计算每月存款余额
    float balance = calculateBalance(monthlyDeposit, annualInterestRate, months);

    // 输出结果，保留两位小数
    printf("%.2f\n", balance);

    return 0;
}



