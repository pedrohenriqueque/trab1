#include <stdio.h>
#include <ctype.h>
int main()
{
    char funcao;
    int anoexperiencia, horacontratada , horatrabalhada, horaextra = 0;
    int qtd_funcionario;
    float salariobruto = 0, inss = 0  , ir = 0 , salarioliquido = 0;
    do{
    puts("Digite a Quantidade de Funcionarios");
    scanf("%d",&qtd_funcionario);
    }while(qtd_funcionario < 1);
    
    for(int i = 0 ; i < qtd_funcionario ; i++){
     do{    
        puts("Digite a Funcao do Funcionario");
        getchar() ;
        funcao = getchar();
        funcao = toupper(funcao);
       }while(funcao !='P' || funcao !='A' || funcao !='G');
      
      do{  
        puts("Digite os Anos de Experiencia");
        scanf("%d",&anoexperiencia);
      }while(anoexperiencia < 0 );
      
      do{  
        puts("Digite As Horas Contratadas");
        scanf("%d",&horacontratada);
        }while(horacontratada < 0);
        
      do{  
        puts("Digite as Horas Trabalhadas");
        scanf("%d",&horatrabalhada);
        }while(horatrabalhada < 0);
    horaextra = horatrabalhada - horacontratada;
    if(horaextra < 0){
        horacontratada = horacontratada + horaextra;
        horaextra = 0;
    }
    if(funcao == 'P'){
        if(anoexperiencia <=2){
            salariobruto = horacontratada * 25;
                if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 25) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 25) * 1.37;
                else
                    salariobruto += (horaextra * 25) * 1.56;
        }    
        else if(anoexperiencia >= 3 && anoexperiencia <= 5){
            salariobruto = horacontratada * 30;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 30) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 30) * 1.37;
                else
                    salariobruto += (horaextra * 30) * 1.56;
        }    
        else{
            salariobruto = horacontratada * 38;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 38) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 38) * 1.37;
                else
                    salariobruto += (horaextra * 38) * 1.56;
        }    
    }
    else if(funcao == 'A'){
        if(anoexperiencia <=2){
            salariobruto = horacontratada * 45;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 45) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 45) * 1.37;
                else
                    salariobruto += (horaextra * 45) * 1.56;
        }    
        else if(anoexperiencia >= 3 && anoexperiencia <= 5){
            salariobruto = horacontratada * 55;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 55) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 55) * 1.37;
                else
                    salariobruto += (horaextra * 55) * 1.56;
        }    
        else{
            salariobruto = horacontratada * 70;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 70) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 70) * 1.37;
                else
                    salariobruto += (horaextra * 70) * 1.56;
        }    
    }    
    else if(funcao == 'G'){
        if(anoexperiencia <=2){
            salariobruto = horacontratada * 85;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 85) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 85) * 1.37;
                else
                    salariobruto += (horaextra * 85) * 1.56;
            
        }    
        else if(anoexperiencia >= 3 && anoexperiencia <= 5){
            salariobruto = horacontratada * 102;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 102) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 102) * 1.37;
                else
                    salariobruto += (horaextra * 102) * 1.56;
            
        }    
        else{
            salariobruto = horacontratada * 130;
            if(horaextra <= 13 && horaextra > 0)
                    salariobruto += (horaextra * 130) * 1.23;
                else if(horaextra > 13 && horaextra <= 22 )
                    salariobruto += (horaextra * 130) * 1.37;
                else
                    salariobruto += (horaextra * 130) * 1.56;
        }
    }
        
        inss = salariobruto * 0.11;
        salarioliquido = salariobruto - inss;
        if(salarioliquido <= 1500)
            ir = 0;
        else if(salarioliquido > 1500 && salarioliquido <= 2700)
            ir = (salariobruto - inss) * 0.15;
        else if(salarioliquido > 2700 && salarioliquido <= 4200)
            ir = (salariobruto - inss) * 0.2;
        else
            ir = (salariobruto - inss)* 0.3;
            
        salarioliquido = salarioliquido - ir;     
    
         printf("O Salario Bruto eh %.2f\n",salariobruto);
        printf("A Hora extra eh %d\n",horaextra);
        printf("O Desconto do INSS eh %.2f\n",inss);
        printf("O Desconto do Imposto de Renda eh %.2f\n",ir);
        printf("O Salario Liquido eh %.2f\n",salarioliquido);
        
        
        
    }

   
}
