#include <stdio.h>
#define MAXLINE 100
void obrabotka(char mas[]);
int main(void)
{
char array[MAXLINE];
gets(array);
obrabotka(array);
puts(array);
return 0;
}
void obrabotka(char mas[])
{
char* ptr = mas+MAXLINE-1;
int cnt_shagov = 0;
while (*ptr != 32 && ptr > mas)
{
ptr--;
cnt_shagov++;// поиск разделителя
}
int end = MAXLINE - cnt_shagov;
while (*ptr == 32)
{
ptr--;
cnt_shagov++;
}
while (*ptr != 32 && ptr > mas)
{
ptr--;
cnt_shagov++;
}
int start = MAXLINE - cnt_shagov;
for (ptr = mas; ptr < (mas + start); ptr++)
{

*ptr = *ptr;
}
char* ptr2 = mas+end; // указатель на слово, после пропуска
char* ptr3 = mas+MAXLINE - 1; // указатель на последний символ массива
for (ptr = ptr; ptr2 <= ptr3; ptr2++, ptr++)
{
*ptr = *ptr2;
}
}
