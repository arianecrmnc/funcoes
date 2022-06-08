#include <stdio.h>

int calcular_digito_verificador (int num)
    {
        int digito, i, somatoria=0;

        for (i=3; i>=1; i--)
        {
            digito = num%10;
            num = num/10;
            somatoria += digito*i;
        }
        return somatoria;
    }

int main()
    {
        int num, resposta;

        printf("informe um numero com tres digitos:");
        scanf("%d", &num);
        resposta=calcular_digito_verificador(num);
        printf("o digito verificador eh %d.", (resposta%11)%10);

    return 0;
    }
