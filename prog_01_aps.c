#include<stdio.h>
#include<stdlib.h>

void interface()
{
    printf("===========================\n");
    printf("  powered by UNICARIOCA       \n");
    printf("===========================\n\n");
    
}
float calcMedia(float valor1, float valor2)
{
    return (valor1+valor2)/2.0;
}

int main()
{
    int opcao=1;
    float av1, av2, resultado;

    
    while(opcao==1)
    {
    interface();
    printf("Escreva o numero referente a opcao desejada: \n\n");
    printf("Opcao 01: Calcular a Media<<\n");
    printf("Opcao 02: Sair do programa<<\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf(">>\t\t\t"); scanf("%d", &opcao);
    system("cls");

        if(opcao==1)
        {
        interface();
        printf("Por favor, escreva a nota da AV1: \n");
        scanf("%f", &av1);
        printf("Agora escreva a nota da AV2: \n");
        scanf("%f", &av2);
        resultado=calcMedia(av1, av2);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("media final = %.1f\n", resultado);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
        else
        return 0;

        if(av1<0.0 || av1>10.0 || av2<0.0 || av2>10.0)
        {
        system("cls");
        interface();
        printf("Valor(es) invalido(s) digitado(s)\n");
        printf("\n>>Pressione qualquer tecla para reiniciar<<");
        getch();
        system("cls");
        continue;
        }

        if(resultado>=7.0)
            printf("\nAprovado\n");
        else
        {
            printf("\nReprovado\n");
        }
        
        printf("\n>>Pressione qualquer tecla para continuar<<");
        getch();
        system("cls");
    }
    /*
    Programa 01 - APS 
    Alunos:Pedro Milck e Erick Klava
    */



    return 0;
} 