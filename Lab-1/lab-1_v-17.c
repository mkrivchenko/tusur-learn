#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv) 
{
    setlocale(LC_ALL, "Rus");
    
    float x,y;

    wprintf(L"Введите координаты x и y - ");
    scanf_s("%f%f", &x, &y);

    if (y < 0) {
        wprintf(L"Точка НЕ принадлежит фигуре\n");
    }
    else {
        if ((pow(x, 2) + pow(y, 2) >= 1) && (pow(x, 2) + pow(y, 2) <= 4)) {
            wprintf(L"Точка принадлежит фигуре\n");
        }
        else {
            wprintf(L"Точка НЕ принадлежит фигуре\n");
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
