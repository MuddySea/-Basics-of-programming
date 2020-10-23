#include <stdio.h>
#include <locale.h>
#define mask0 0x0000000f
#define mask1 0x000000f0
#define mask2 0x00000f00
#define mask3 0x0000f000
#define mask4 0x000f0000
#define mask5 0x00f00000
#define mask6 0x0f000000
#define mask7 0xf0000000
int main(void)
{
 setlocale(LC_ALL, "Russian");
 int long z;
 unsigned long int b0, b1, b2, b3, b4, b5, b6, b7;
 int d; // разность прогрессии
 int cnt = 0;
 printf("z = ");
 scanf_s("%lu", &z);
 printf("Введенное чилсло z в десятичной системе счисления = %d\n", z);
 unsigned long y = (unsigned int)z;
 printf("Введенное число z в шестнадцатиричной системе счисления = %lx\n", y);
 //выделение значений байтов
 b0 = y & mask0;
 printf("b0 = %x\n", b0);
 b1 = y & mask1;
 b1 >>= 4; // соблюдение разрядности
 printf("b1 = %x\n", b1);
 b2 = y & mask2;
 b2 >>= 8; // cоблюдение разрядности
 printf("b2 = %x\n", b2);
 b3 = y & mask3;
 b3 >>= 12; // соблюдение разрядности
 printf("b3 = %x\n", b3);
 b4 = y & mask4;
 b4 >>= 16; // соблюдение разрядности
 printf("b4 = %x\n", b4);
 b5 = y & mask5;
 b5 >>= 20; // соблюдение разрядности
 printf("b5 = %x\n", b5);
 b6 = y & mask6;
 b6 >>= 24; // cоблюдение разрядности
 printf("b6 = %x\n", b6);
 b7 = y & mask7;
 b7 >>= 28; // соблюдение разрядности
 printf("b7 = %x\n", b7);
 d = b1 - b0; // ход прогрессии
 printf("Разность прогрессии в 10 сиситеме счисления = %d\n", d);
 if (b1 != 0)
 {
 if (d == b2 - b1)
 {
 cnt++;
 printf("Второй байт соблюдает последовательность\n");

 if (b2 != 0)
 {
 if (d == b3 - b2)
 {
 cnt++;
printf("Третий байт соблюдает последовательность\n");
 }
 if (b3 != 0)
 {
 if (d == b4 - b3)
 {
 printf("Четвертый байт соблюдает последовательность\n");
 cnt++;
 }
if (b4 != 0)
{
 if (d == b5 - b4)
 {
 printf("Пятый байт соблюдает последовательность\n");
 cnt++;
 }
if (b5 != 0)
{
 if (d == b6 - b5)
 {
 printf("Шестой байт соблюдает последовательность\n");
 cnt++;
 }
if (b6 != 0)
{
 if (d == b7 - b6)
 {
 printf("Седьмой байт соблюдает
последовательность\n");
 cnt++;
 }
 }
 }
 }
 }
 }
 }
 }
 if (cnt == 6)
 {
 printf("Байты введенного числа полностью соблюдает арифм. прогрессию\n");
 }
 else
 {
 if (cnt > 0)
 printf("Арифм. прогрессия соблюдена до некоторого байта, указанного выше\n");
 else
 {
 printf("Байты введенного числа полностью не соблюдают арифм. прогрессию\n");
 }
 }
 return 0;
}
