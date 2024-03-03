#include <stdlib.h>
#include <stdio.h>

void func1(){
    int x;
}
int main(){
    int x = 15;
    printf("Valor em hex e = %x\n", x);
    {
        x++;
    }
    printf("Valor atual em hex = %x\n", x);
}