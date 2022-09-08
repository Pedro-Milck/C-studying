#include<stdio.h>





int main()
{
   int x, y, soma=0;
   
   scanf("%d %d", &x,&y);
    
        y++; 
        x--; 
    
        while(y<x) 
        {
            printf("y = %d\n", y);
            if(y%2!=0) 
            {
                soma+=y; 
                y+=2; 
            } 
            else 
                y++;

            if(x==y) 
                break;
            
        }
           
        
        printf("soma = %d\n", soma);


    return 0;
}