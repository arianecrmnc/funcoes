#include <stdio.h>

int _eh_bissexto (int ano);
int main ()
{
    int _eh_bissexto (int ano)
    {
        if (ano%4==0 && (ano%100!=0 || ano%400==0))
            return 1;
        else
            return 0;
    }

    int ano_escolhido;

    printf("informe um ano:");
    scanf("%d", &ano_escolhido);
    if (_eh_bissexto(ano_escolhido))
        printf("eh bissexto");
    else
        printf("nao eh bissexto");

    return 0;
}
