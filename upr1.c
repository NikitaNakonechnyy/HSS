#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
//#include <stdlib.h>	//Данная библиотека для многих функций Си нужна, но не здесь
//#include <locale.h> // Библиотека для указания локации (региональной кодировки) для Visual Studio

int bissectrice(double, double);
int vertical(double, double);
int horizontal(double, double);
int reversed_vertical(double, double);
int reversed_horizontal(double, double);




void main() {
	double x = 0.;
	double y = 0.;
	printf("Введите x: ");
	scanf("%lf", &x);
	printf("Введите y: ");
	scanf("%lf", &y);
	printf("%d", bissectrice(x, y) && reversed_horizontal(x, y) && reversed_vertical(x, y) || vertical(x, y) && horizontal(x, y));
	//return 0;
}

// x = 5, y = -6 - учитываются ли область пустых треугольников ниже биссектрисы
// x = 3, y = 4 - учитывается ли область пересечения линий verical и horizontal (0)
// x = 4, y = -4 - учитывается ли область пересечения линий (0)
// x = -4, y = 3 - учитывается ли область пересечения линий (0)
// x = 0, y = 0 - (1) 
// x = 1, y = -1 - (1) 
// x = -5, y = 5 - (0)
// x = -5, y = 2 - (1)
// x = 1, y = -1 - (1)
// x = -5, y = -5 - (0)






int reversed_vertical(double x, double y) {
	int res = -1;
	res = (y < 3);
	return res;
}

int reversed_horizontal(double x, double y) {
	int res = -1;
	res = (x < 4);
	return res;
}

int bissectrice(double x, double y) {
	int res = -1;
	res = (y <= -x);
	return res;
}

int vertical(double x, double y) {
	int res = -1;
	res = (x > 4);
	return res;
}
int horizontal(double x, double y) {
	int res = -1;
	res = (y > 3);
	return res;
}

