#include <stdio.h>
#define N 3
#include <locale.h>
int main(void)
{
 setlocale(LC_ALL,"Russian");
 int mas[N][N];
 int i;
 int j;
 int sum = 0;
 int k = 0;
 int sum_2 = 0;
 int m = 1;
 for (i = 0; i < N; i++)
 {
 for (j = 0; j < N; j++)
 {
 scanf_s("%d", &mas[i][j]); /// Ввод массива
 }
 }
 printf("Введенный массив:\n");
 for (i = 0; i < N; i++)
 {
 { for (j = 0; j < N; j++)
 printf("%d \t", mas[i][j]); // печать массива
 }
 printf("\n");
 }
 //тут начинается счет над главной диагональю
 i = 0;
 while (i < N)
 {
 for (j = k + 1; j < N; j++)
 {
 sum += mas[i][j];
 }
 i++;
 k++;
 }
 printf("Сумма элементов над главной диагональю = %d \n", sum);
 // Тут кончается
 // тут начинается счет под главной диагональю
 i = 1;
 while (i < N)
 {
 for (j = 0; j < m; j++)
 {
 sum_2 += mas[i][j];
 }
 m++;
 i++;

 }
 printf("Сумма элементов под главной диагональю = %d \n", sum_2);
 // Тут кончается
 printf("Массив после обработки\n");
 if (sum < sum_2)
 {
 i = 0;
 k = 0;
 while (i < N)
 {
 for (j = k + 1; j < N; j++)
 {
 mas[i][j] = 0;
 }
 i++;
 k++;
 }

 }
 if (sum > sum_2)
 {
 i = 1;
 m = 1;
 while (i < N)
 {
 for (j = 0; j < m; j++)
 {
 mas[i][j] = 0;
 }

 i++;
 m++;
 }
 }
 if (sum == sum_2)
 {
 printf("Сумма элементов над главной диагональю равна сумме элементов под
главной диагональю, массив не изменен\n");
 }


 for (i = 0; i < N; i++)
 {
 { for (j = 0; j < N; j++)
 printf("%d \t", mas[i][j]); // печать массива
 }
 printf("\n");
 }
 return 0;
}
