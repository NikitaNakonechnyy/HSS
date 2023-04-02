#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* GetInput();
bool Testinput(char*);
int strToInt(char*);
void printInt(int);

int num;
char* x;
char* y;
int z;



int main(){
char* y = GetInput();
    if (Testinput(y) == true) {
        int z = strToInt(y);
        printInt(z);
        } 
    else {
    printf("Невозможно преобразовать в формат int\n");
        }
    return 0;
}



char* GetInput(){



    char* x = malloc(sizeof(char) * 256);
    printf("Введите что хотите попробовать преобразовать:\n");
    scanf("%s", x);
    return x;
}




bool Testinput(char* x){

    int num;
    if (sscanf(x, "%d", &num) == 1) {
        return true;
        }       
    else {
    return false;
    }   
};
    
int strToInt(char* x){
    return atoi(x);
};

void printInt(int x){
    printf("%d\n", x);
}