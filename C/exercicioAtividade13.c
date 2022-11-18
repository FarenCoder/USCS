#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numero=0, numero1=0;
    printf("Digite o numero:");
    scanf("%lf",&numero );
    if(numero>=100 && numero<=200)
    {
    	printf("O esta entre 100 e 200!" );
	}
    else
    {
    	printf("O numero está fora do intervalo!" );
	}
return 0;
}	
