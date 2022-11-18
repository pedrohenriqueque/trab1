#include <stdio.h>
#include <ctype.h>
const int TAM = 10;
int main(){
	int tam_espiral,i,j;
	char tipo;
	do{
	    printf("Digite o Tamanho da Matriz Espiral: ");
	    scanf("%d %c",&tam_espiral, &tipo);
	}while(tam_espiral < 2 || tam_espiral >10);
	tipo = toupper(tipo);
	int espiral[TAM][TAM];
    if(tipo == 'C'){    
        int n=tam_espiral, inicio=0, nlimite=n-1,contador=1; 
        while(contador<=(n*n)){ 
		    for(i = inicio; i<= nlimite; i++){ 
			    espiral[inicio][i] = contador;
			    contador++;
		    }
		    for(i = inicio+1;i <= nlimite ; i++){ 
			    espiral[i][nlimite] = contador;
			    contador++;
		    }
		    for(i = nlimite-1; i >= inicio; i--){
			    espiral[nlimite][i] = contador;
			    contador++;
		    }
		    for(i = nlimite-1; i>= inicio+1; i--){
			    espiral[i][inicio] = contador;
			    contador++;
		    }
		       inicio++;
		       nlimite--; 
	}
}
    if(tipo == 'D' ){    
        int n=tam_espiral, inicio=0, nlimite=n-1,contador=tam_espiral * tam_espiral;
        while(contador >= 1){ 
		    for(i = inicio; i<= nlimite; i++){ 
			    espiral[inicio][i] = contador;
			    contador--;
		    }
		    for(i = inicio+1;i <= nlimite ; i++){ 
			    espiral[i][nlimite] = contador;
			    contador--;
		    }
		    for(i = nlimite-1; i >= inicio; i--){
			    espiral[nlimite][i] = contador;
			    contador--;
		    }
		    for(i = nlimite-1; i>= inicio+1; i--){
			    espiral[i][inicio] = contador;
			    contador--;
		    }
		    inicio++;
		    nlimite--; 
	}
}	
	for (i = 0;i < tam_espiral; i++){	
		for (j = 0;j < tam_espiral ;j++){
		    if(espiral[i][j] < 10){
			printf("  %d",espiral[i][j]);							
		}
		else{
		    printf(" %d",espiral[i][j]);
		}
		}
	printf("\n");
	}
 
	return 0;
}
