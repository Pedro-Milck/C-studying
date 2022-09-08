#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>



float seno(float valor)
{
    float result;
    result=sin(valor);
    return result;
}
float cosseno(float valor)
{
    float result;
    result=cos(valor);
    return result;
}
    

float tangente(float valor)
{
    float result;
    result=tan(valor);
    return result;
}
float logaritmo(float valor)
{
    float result;
    result=log10(valor);
    return result;
}
int main()
{
    float num, resultado;
    int opcao;
    char continuar='s';

    
    while(continuar=='s' || continuar=='S')
    {
        printf("Digite o numero: \n");
        scanf("%f", &num);
        printf("Digite a operacao desejada: \n");
        printf("1 => seno\n");
        printf("2 => cosseno\n");
        printf("3 => tangente\n");
        printf("4 => logaritmo (base 10)\n");
        printf(">> "); scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
            resultado=seno(num);
            printf("O seno de %.2f = %.2f\n", num, resultado);
            break;
            }
            case 2:
            {
            resultado=cosseno(num);
            printf("O cosseno de %.2f = %.2f\n", num, resultado);
            break;
            }
            case 3:
            {
            resultado=tangente(num);
            printf("A tangente de %.2f = %.2f\n", num, resultado);
            break;
            }
            case 4:
            {
            resultado=logaritmo(num);
            printf("O logaritmo de %.2f = %.2f\n", num, resultado);
            break;
            }
        }   
        printf("Deseja continuar os calculos? >> (S\\N)\n");
        continuar = getch();
        system("cls");
    }
         

    
        
   

        
    return 0;
}