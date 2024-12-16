#include <stdlib.h>
#include <stdio.h>

int funcao(int x, int y);
int fatorial(int x);

int main()
{
    int x, y, n;

    printf("\nDigite os dois numeros para multiplicar:\n");
    scanf("%d %d", &x, &y);

    printf("Resultado: %d", funcao(x, y));

    printf("\nDigite um numero para calccular o fatorial: \n");
    scanf("%d", &n);

    printf("Fatorial: %d", fatorial(n));
}

int funcao(int x, int y){
    return (x * y);
}

int fatorial(int n){
    int cont = 1;
    if(n == 0 || n == 1) return 1;
    else{
        for(int i = 1; i <= n; i++){
            cont *= i;
        }
        return cont;
    }
}


