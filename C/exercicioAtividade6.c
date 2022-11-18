#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numero=0, numero1=0;
    printf("Digite o numero:");
    scanf("%lf",&numero );
    if(numero>=200 && numero<=300)
    {
    	printf("O esta entre 200 e 300!" );
	}
    else
    {
    	printf("O numero está fora do intervalo!" );
	}
return 0;
}	
