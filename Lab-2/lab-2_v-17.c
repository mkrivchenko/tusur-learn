#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char **argv) 
{
	setlocale(LC_ALL, "Rus");
	
	// Блок инициализации массива
	int n = -1;

	while (n <= 0)
	{
		wprintf(L"Введите размерность массива: ");
		scanf_s("%d", &n);
		
		if (n <= 0)
		{
			wprintf(L"Размер массива не может быть ОТРИЦАТЕЛЬНЫМ или равен НУЛЮ!\n");
		}
	}
	

	int i;
	int A[n];

	for (i = 0; i < n; i++) 
	{
		A[i] = rand() % 100 - 50;
		// TODO: Удалить вывод элементов массива
		wprintf(L"%d: %d\n", i, A[i]);
	}

	// Блок А) сумму элементов массива с нечетными индексами;
	int summ = 0;

	for (i = 0; i < n; i++) 
	{
		if (i % 2 != 0) 
		{
			summ += A[i]; 
		} 
	}
	
	wprintf(L"А) Сумма элементов массива с нечетными индексами: %d\n", summ);

	// Блок Б) количество положительных элементов массива, расположенных 
	//         между элементами с индексами a и b, значения a, b задавать с клавиатуры;

	int a = -1;
	int b = n; 
	int q_positiv = 0;

	while (a < 0 || b >= n)
	{
		wprintf(L"Введите индексы a и b: ");
		scanf_s("%d%d", &a, &b);
		
		if (a < 0 || b >= n) 
		{
			wprintf(L"Введенные индексы a или b выходят за границы массива!\n	## границы текущего массива: 0 и %d\n", n - 1);
		}
	}

	for (i = a; i <= b; i++) 
	{
		if (A[i] > 0)
		{
			q_positiv += 1; 
		}
	}
	

	wprintf(L"Б) Количество положительных элемнтов между индексами %d и %d: %d\n", a, b, q_positiv);

	// В) произведение минимального и максимального элементов.

	int min, max = A[0]; 
	int comp = 0;

	for (i = 0; i < n; i++)
	{
		if (A[i] > max) 
		{
			max = A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
		}
	}

	wprintf(L"Минимальное: %d\nМаксимальное: %d\n", min, max);

	comp = min * max;

	wprintf(L"В) Произведение максимально и минимального числа: %d\n", comp);

	system("PAUSE");
	return EXIT_SUCCESS;
}