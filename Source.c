// В массиве из 10 целых чисел все элементы, стоящие левее максимального, заменить нулями, а элементы, стоящие правее максимального, заменить максимальным элементом. 



#include <stdio.h>

#include <locale.h>

#define N 10
void obrabotka(int j);

int main(void)
{

	setlocale(LC_ALL, "Russian");
	int mas[N];
	int max = mas[0];
	obrabotka(mas);

	return 0;


}

void obrabotka(int j )
{

	j = 0;
	int i;
	printf("Введите значения:\n");

	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &mas[i]);
		if (mas[i] == "\n")
		{
			printf("Введен хуй")
		}


	}
	printf("Введенные значения:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", mas[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
			j = i;
		}
	}
	printf("\nМаксимальный элемент массива - %d", max);
	printf("\nА его порядковый номер - %d", j);
	i = 0;
	while (i < j)
	{
		mas[i] = 0;
		i++;
	}

	while (j < N)
	{
		mas[i] = max;
		j++;
		i++;
	}

	printf("\nМассив после обработки:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", mas[i]);
	}

}