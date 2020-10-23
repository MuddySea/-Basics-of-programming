#include <stdio.h>
#include <locale.h>
#define N 10
int main(void)
{
setlocale(LC_ALL, "Russian");
int i;
int j;
int mas[N];
int max = mas[0];
printf("Введите значения:\n");
for (i = 0; i < N; i++)
{
scanf_s("%d", &mas[i]); // Заполнение массива
}
printf("Введенные значения:\n");
for (i = 0; i < N; i++)
{
printf("%d ", mas[i]); // вывод массива
}
for (i = 0; i < N; i++)
{
if (mas[i] > max)
{
max = mas[i]; // поиск наибольшего элемента
j = i;
}
}
printf("\nМаксимальный элемент массива - %d\n", max);
printf("А его порядковый номер - %d\n", j);
i = 0;
while (i < j)
{
mas[i] = 0; // заполнение нулями
i++;
}
while (j < N)
{
mas[i] = max; // заполнение макс. элементами
j++;
i++;
}
printf("\nМассив после обработки:\n");
for (i = 0; i < N; i++)
{
printf("%d ", mas[i]); // печать массива
}
return 0;
}
