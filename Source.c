// � ������� �� 10 ����� ����� ��� ��������, ������� ����� �������������, �������� ������, � ��������, ������� ������ �������������, �������� ������������ ���������. 



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
	printf("������� ��������:\n");

	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &mas[i]);
		if (mas[i] == "\n")
		{
			printf("������ ���")
		}


	}
	printf("��������� ��������:\n");
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
	printf("\n������������ ������� ������� - %d", max);
	printf("\n� ��� ���������� ����� - %d", j);
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

	printf("\n������ ����� ���������:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", mas[i]);
	}

}