#include<stdio.h>






int main()
{
    float a, b, c, aux;
    printf("Escreva os valores dos lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(b>a)
        if(b>c){aux=a; a=b; b=aux;}
        
    if(c>a)
        if(c>b) {aux=a; a=c; c=aux;}
   
    //VERIFICAÇÃO DOS TRIÂNGULOS   
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
       
    if(a*a==b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    
   if(a*a>b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    
    if(a*a<b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
        printf("TRIANGULO ISOSCELES\n");
        





    return 0;
}