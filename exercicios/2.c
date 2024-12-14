#include <stdlib.h>
#include <stdio.h>

int funcao(int x, int y);

int main()
{
    int x, y;

    printf("Digite os dois numeros para multiplicar:\n");
    scanf("%d %d", &x, &y);

    printf("Resultado: %d", funcao(x, y));
}

int funcao(int x, int y){
    return (x * y);
}


