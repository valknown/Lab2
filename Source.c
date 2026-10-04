#include <stdio.h>
#include <locale.h>

void task1();
void task2();
void task3();

void main()
{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
}

void task1()

{
	
	printf("123\n"); // подзадание 1

	printf("1\n2\n3\n\n"); // подзадание 2

	printf("1\n \t 2 \n \t \t 3\n\n"); // подзадание 3

	printf("%d \n %2d \n %3d \n %4d\n\n", 1, 2, 3, 4); // подзадание 4

	printf("%10.3f\n ", 12.234657); // подзадание 5

	printf("%11.5f\n\n", 12.234567); // подзадание 6

	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2); // подзадание 7

	printf("%d разделить %d равно %f\n ", 7, 5, 7 / 5.); // подзадание 8

	printf("%d умножить на %d равно %d\n ", 2000, 4, 2000*4); // подзадание 9

	printf("%g разделить %e равно %f\n\n\n", 5., 2000000., 5. / 2000000); // подзадание 10
}

void task2()
{
	int N, K;
	N = 11;
	K = 30;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K + 60*N);
	printf("До полуночи осталось %d часов и %d минут\n", 24-N, 60-K);
	printf("С 8.00 прошло %d секунд\n", (60 * N * 60 + 60 * K) - 8 * 3600);
	printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n\n", N / 24., K / 60.);
}

void task3()
{
	int n = 2;
	float L = 133.;
	int k = 2;
	int m = 4;


	printf("Дано:\n \t %d\n \t %.0f \n \t ------- \nОтвет: \n \t %+0*.*f", n, L, k+m+2, m, n/L);
}