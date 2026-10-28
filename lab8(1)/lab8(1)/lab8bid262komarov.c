#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int task0() {
    int count;
    char sym1,sym2;
    printf("Введите первый символ: ");
    scanf(" %c", &sym1);

    printf("Введите второй символ: ");
    scanf(" %c", &sym2);

    printf("Введите количество символов: ");
    scanf("%d", &count);

    putchar('+');
    for (int start = 1; start <= count; start++) {
        if (start <= count/2){
            putchar(sym1);
            putchar('!');
        }
        else {
            putchar(sym2);
            putchar('!');
        }
        
    }
    putchar('+');
    putchar('\n');

    return 0;
}

task1() {
    int n, m, s = 0, k = 1;

    printf("Введите начало цикла: ");
    scanf("%d", &m);

    printf("Введите конец цикла: ");
    scanf("%d", &n);
    for (int i = m; i >= n; i--) {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    printf("результат %d\n", s);
    return 0;
}

int task1a() {
    int n;
    double res = 1;
    double k;
    printf("Введите степень n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        res *= 2;
        printf("2^%d = %10.0f\n", i, res);
    }

    k = res / 1024.0;
    printf("\nРезультат: %.1fK\n", k);


    return 0;
}
int task2() {
    double step;
    double start = 0.1;
    double end = 2.5;

    printf("Программа табулирования функции: y = x^2 + 2*pi*cos(pi*x)\n");
    printf("Интервал изменения x: [0.1; 2.5]\n\n");

    printf("Введите шаг табуляции: ");
    scanf("%lf", &step);

    printf("\n+----------+----------+\n");
    printf("|    x     |   f(x)   |\n");
    printf("+----------+----------+\n");

    for (double x = start; x <= end + (step / 2.0); x += step) {
        double y = pow(x, 2) + 2.0 * M_PI * cos(M_PI * x);
        printf("| %8.2lf | %8.2lf |\n", x, y);
    }

    printf("+----------+----------+\n");
    return 0;
}

int task3() {
    double x, num = 1, denum = 1, res;
    int n = 2;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 6; i++) {
        num *= (x - (n - 1));
        denum *= (x - n);
        n *= 2;
    }
    if (denum == 0) {
        printf("Деление на 0 невозможно");

    }
    else {
        res = num / denum;
        printf("Ответ: %lf\n", res);
    }

    return 0;
}

int main() {
    setlocale(LC_ALL, ".UTF8");
    task3();
    return 0;
}

