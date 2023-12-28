#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y, z;
    scanf_s("%d %d %d", &x, &y, &z);
    if (x == y && x == z) { printf("Треугольник равносторонний"); }
    if (pow(x, 2) + pow(y, 2) == pow(z, 2)) { printf("Треугольник прямоугольный"); }
    if ((x == y && x != z) || (x == z && x != y) || (z == y && z != x)) { printf("Треугольник равнобокий"); }
}
