
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "RUS");
    int A[100], n;
    int p = 1;
    int count = 0;

    printf("Введите количество чисел: ");
    scanf_s("%d", &n);

    if (n < 1 || n > 100)
        return 1;

    for (int i = 0; i < n; i++)
    {
        printf("Введите число: ");
        scanf_s("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            p = p * (i + 1);
            count++;
        }
    }

    if (count > 0)
        printf("Ответ: %d", p);
    else
        printf("Положительных чисел нет");

    return 0;
}
