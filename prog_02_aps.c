#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int calcFatorial(int valor)
{
    if(valor==0)
    return 1;
    
    return valor*calcFatorial(valor-1);
}
void interface()
{
    printf("===========================\n");
    printf("  CALCULADORA DE FATORIAL   \n");
    printf("===========================\n\n");
    
}


int main()
{
    int num, opcao=1, resultado;
    
    while(opcao==1)
    {
    interface();
    printf("Escreva o numero referente a \nopcao desejada: \n\n");
    printf("Opcao 01: Calculo do fatorial\n");
    printf("Opcao 02: Sair do programa\n");
    printf(">>\t\t\t"); scanf("%d", &opcao);
    system("cls");
        
    
    if(opcao==1)
       { 
        interface();
        printf("Digite o valor a ser fatorado: "); 
        scanf("%d", &num);
        if(num<0)
            {
            system("cls");
            interface();
            printf("Valor invalido digitado, escreva apenas numeros positivos\n\n");
            printf(">>Pressione qualquer tecla para continuar<<");
            getch();
            system("cls");
            continue;
            }
        resultado=calcFatorial(num);
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(" Fatorial de %d = %d\n", num, resultado);
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf(">>Pressione qualquer tecla para continuar<<");
        getch();
        system("cls");
        }
    else
    return 0;
        
    }
    
    



    return 0;
}