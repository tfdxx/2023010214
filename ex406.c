#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

// ����ÿ�´�����ĺ���
float calculateBalance(float monthlyDeposit, float annualInterestRate, int months) {
    float monthlyInterestRate = annualInterestRate / 12;
    float balance = 0;

    // ÿ���¼��������
    int i;
    for ( i = 0; i < months; i++) {
        balance = (balance + monthlyDeposit) * (1 + monthlyInterestRate);
    }

    return balance;
}

int main() {
    float monthlyDeposit, annualInterestRate;
    int months;

    // �Ӽ�������ÿ�´�����������ʺ��·���
    printf("������ÿ�´�����������ʺ��·������ö��ŷָ�����");
    scanf("%f,%f,%d", &monthlyDeposit, &annualInterestRate, &months);

    // ���ú�������ÿ�´�����
    float balance = calculateBalance(monthlyDeposit, annualInterestRate, months);

    // ��������������λС��
    printf("%.2f\n", balance);

    return 0;
}



