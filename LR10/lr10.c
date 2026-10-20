#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include <stdlib.h>


double fa(double x);
double fb(double x);

void main()
{
    setlocale(LC_ALL, "RUS");
    double x, r_fa, r_fb;
    double prod, sq, sum;

    printf("Введите значение x: ");
    if (scanf("%lf", &x) != 1) 
    {
        printf("Ошибка ввода!\n");
        system("pause");
        return;
    }

    r_fa = fa(x);
    r_fb = fb(x);

    prod = r_fa * r_fb;                       
    sq = pow(r_fa, 2) - pow(r_fb, 2);       
    sum = 2 * (r_fa + r_fb);                 

    printf("\nРезультаты расчетов:\n");
    printf("fa(x) = %.6lf, fb(x) = %.6lf\n", r_fa, r_fb);
    printf("Произведение: %.6lf\n", prod);
    printf("Разность квадратов: %.6lf\n", sq);
    printf("Удвоенная сумма: %.6lf\n", sum);

    system("pause");
}


double fa(double x)
{
    double y;
    if (x <= 3)
    {
        y = x * x - 3 * x + 9;
    }
    else
    {
        y = (1.0) / (pow(x, 3) + 3);
    }
    return y;
}

double fb(double x)
{
    double y = x * exp(sin(x * x));
    return y;
}
