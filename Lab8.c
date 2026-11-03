#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int task0()
{
    int n, i;
    char c, d;
    printf("Сколько символов печатать: ");
    scanf("%d", &n);
    printf("Первый символ: ");
    scanf(" %c", &c);
    printf("Второй символ: ");
    scanf(" %c", &d);
    putchar('+');
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2)
            putchar(c);
        else
            putchar(d);
        putchar('!');
    }
    putchar('+');
    putchar('\n');
    return 0;
}

int task1()
{
    int n, m, i, s, k;
    printf("Введите m: ");
    scanf("%d", &m);
    printf("Введите n: ");
    scanf("%d", &n);
    s = 0;
    k = 1;
    for (i = m; i <= n; i++)
    {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    printf("результат %d\n", s);
    return 0;
}

int task1a()
{
    int n, i, v;
    printf("Введите степень n: ");
    scanf("%d", &n);
    v = 1;
    for (i = 1; i <= n; i++)
    {
        v = v * 2;
        printf("2^%-2d = %10d\n", i, v);
    }
    printf("Результат: %.1fK\n", v / 1024.0);
    return 0;
}

int task2()
{
    double x, y, h;
    printf("Функция: y = x^2 + sin(5x)\n");
    printf("Введите шаг: ");
    scanf("%lf", &h);
    printf("-----------------\n");
    printf("|   x   |  f(x) |\n");
    for (x = 0.1; x <= 2.1001; x += h)
    {
        y = x * x + sin(5 * x);
        printf("| %5.2f | %5.2f |\n", x, y);
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    printf("Задание 0\n");
    task0();
    printf("Задание 1\n");
    task1();
    printf("Задание 1А\n");
    task1a();
    printf("Задание 2\n");
    task2();
    return 0;
}