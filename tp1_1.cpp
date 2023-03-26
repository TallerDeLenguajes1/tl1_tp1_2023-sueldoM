#include <stdio.h>

int main(){
    int a, *punta;
    a=10;
    punta = &a;
    printf("Hola Mundo\n");
    printf("%p\n", &punta);
    printf("%d\n", *punta);
    printf("%p\n", &a);
    printf("%ld", sizeof(a));
    return 0;
}