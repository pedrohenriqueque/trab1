#include <stdio.h>

int main()
{
    int n , k , maior, positivo ;
    
    do{
        puts("Digite o Numero N: ");
        scanf("%d",&n);
        if(n < 2)
            puts("Numero Invalido");
    }while(n < 2 );
    
    int v[n];
    
    for(int i = 0 ; i < n ; i++){
        printf("Digite um Valor Positivo para o Vetor[%d]",i);
        scanf("%d",&positivo);
        while( positivo < 0)
            scanf("%d",&positivo);
            v[i] = positivo;
    }
       
    do{    
        puts("Digite um Valor K:" );
        scanf("%d",&k);
        if(k > n || k < 1)
            puts("Numero Invalido");
    }while(k > n || k < 1);
    
for(int i = 0 ; i < k ; i++){
    maior = v[0];
    for(int i = 0 ; i < n ; i++)
            if(v[i] > maior)
                maior = v[i];

    for(int i = 0 ; i < n ; i++)
        if(v[i] == maior)
            v[i] = 0;

}
        printf("%d ",maior);
}
