#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculateBalance(float monthlyDeposit, float annualInterestRate, int months) {
    float monthlyInterestRate = annualInterestRate / 12;
    float balance = 0;
    
    int i;
    for ( i = 0; i < months; i++) {
        balance = (balance + monthlyDeposit) * (1 + monthlyInterestRate);
    }

    return balance;
}

int main() {
    float monthlyDeposit, annualInterestRate;
    int months;

    printf("请输入每月存款数、年利率和月份数（用逗号分隔）：");
    scanf("%f,%f,%d", &monthlyDeposit, &annualInterestRate, &months);

    float balance = calculateBalance(monthlyDeposit, annualInterestRate, months);

    printf("%.2f\n", balance);

    return 0;
}



