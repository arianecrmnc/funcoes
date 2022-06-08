#include <stdio.h>

int conversor_bin2dec (int numero)
    {
        int resultado;

        return resultado;
    }
int conversor_dec2bin (int numero)
    {
        int resultado;

        return resultado;
    }

int main()
    {
        int opcao=1, numero, resultado;

        while(opcao!=0)
        {
            printf("se deseja converter de binario para decimal, digite 1, do contrario, digite 2:");
            scanf("%d", &opcao);
            if(opcao==1)
                {
                printf("informe o numero a ser convertido:");
                scanf("%d", &numero);
                resultado=conversor_bin2dec (numero);
                printf("%d", resultado);
                }
                else if(opcao==2)
                {
                printf("informe o numero a ser convertido:");
                scanf("%d", &numero);
                resultado=conversor_dec2bin (numero);
                printf("%d", resultado);
                }
                else
                printf("opcao invalida.");
        }

        printf("tchau! (:");

    return 0;
    }
