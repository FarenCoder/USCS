#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int numero=0;
    printf("Digite o numero 1:");
    scanf("%d",&numero );
    if(numero%2==0)
    {
    	printf("O numero � par!" );
	}
    else
    {
        printf("O numero � impar!" );
	}
return 0;
}	
