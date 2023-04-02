#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

int main() {
    double x = 2;
    double y = 1;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf",&y);

    if (((pow((y-5),2) + pow((x-5),2)) >= pow(5,2)) && (x >= 0) && (y >= 0) && (x <= 5) && (y <= 5)){
        printf("1");
    } 
    else{
        printf("0");
    }
    return 0;
}

// x = 0 y = 5 (1)
// x = 5 y = 0 (1)
// x = 5 y = 5 (0)
// x = 10 y = 0 (0)
// x = 0 y = 10 (0)
// x = 2 y = 3 (0)
// x = 3 y = 2 (0)
// x = 0 y = 0 (1)
// x = 1 y = 1 (1)
// x = 2 y = 2 (0)
