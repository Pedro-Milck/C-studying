#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


#define NUM 2

void interface()
{
    printf("===========================\n");
    printf("  powered by UNICARIOCA       \n");
    printf("===========================\n\n");
}



int main()
{
int qtd=0, i, j;
float nota[qtd][NUM], mediaav1=0.0, mediaav2=0.0;
//i=quantidade de alunos
//j=quantidade de provas


interface();
printf("\nInsira o numero de alunos para armazenar\n");
printf("as notas e calcular suas medias\n");
scanf("%d", &qtd);


for(i=0;i<qtd;i++)
    {
    for(j=0;j<NUM;j++)
        {
        printf("Digite a nota da AV%d do %d aluno: \n", j+1, i+1);
        scanf("%f", &nota[i][j]);
        
        switch(j)
            {
        case 0:
        {
            mediaav1=mediaav1+nota[i][j];
            break;
        }
        
        
        case 1:
        {
            mediaav2=mediaav2+nota[i][j];
            break;
        }
            }
        }
    }

printf("A media da AV1 foi %.1f\n", mediaav1/NUM);
printf("A media da AV1 foi %.1f\n", mediaav2/NUM);


return 0;
}