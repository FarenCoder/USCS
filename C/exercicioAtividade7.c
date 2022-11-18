#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numeroDeCopias=0, valorTotal=0;
    printf("Digite o numero de copias:");
    scanf("%lf",&numeroDeCopias );
    if(numeroDeCopias>=200)
    {
    	valorTotal=numeroDeCopias*0.30;
    	printf("O valor total a ser pago é:%0.2f\n",valorTotal );
	}
    else
    {
    	valorTotal=numeroDeCopias*0.50;
    	printf("O valor total a ser pago é:%0.2f\n",valorTotal );
	}
return 0;
}	
