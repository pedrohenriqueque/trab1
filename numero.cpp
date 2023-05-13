#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    long long ans,div,mult,nod,num,q,r,resp;
    long long n,k,aux;
    char tipo;
    bool comeu = false;
     do{
        printf("Digite um Numero: ");
        scanf("%lld",&n);
    }while(n <= 0 || n <= 99 || n >= 10000000000);
    getchar();
do{     
        
        puts("Operacao: ");
        scanf("%c",&tipo);
        tipo = toupper(tipo);
        if(tipo == 'T')
            break;
        scanf("%lld",&k);
        getchar();
        
    aux = k;
     nod = 0;
     num = n;
    while(num != 0){
        num /= 10;
        nod++;
    }
    
    if(tipo == 'D'&& k > 0)
        k = k % nod;
    else if(tipo =='E' && k > 0)
        k = nod - k;
    else if(tipo == 'I' && k >= 0 && k <= 9)
        k = 1;
    else if(tipo == 'F' && k >= 0 && k <= 9)
        k = nod -1;
    else{
        puts("Operação Incorreta");
        break;
    } 
        printf("%lld ",k);
     div = pow(10,k);
     mult = pow(10,nod -k);
     q = n / div;
    if(tipo == 'F')
        q = aux;
    r = n % div;
    if(tipo == 'I')
        r = aux;
    printf("%lld ",q);
    printf("%lld ",r);
    printf("%lld ",mult);
     ans = (r * mult) + q;
     n = ans;
     num = ans;
    printf("%lld\n",ans);
    if(comeu == true){
        
    }
    comeu = false;
    if(ans < mult && tipo == 'I'){
        ans = mult + q + mult;
        n = ans;
        num = ans;
        comeu = true;
    }
}while(tipo != 'T');    
}
