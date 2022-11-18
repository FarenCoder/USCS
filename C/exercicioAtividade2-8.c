#include <stdio.h>
#include <locale.h>
void somaNumero(){
double numero=0, calculoSoma=0;
do
{
printf("Digite um numero: \n");
scanf("%lf",&numero);
if(numero!=999){
calculoSoma=calculoSoma+numero;
printf("Soma parcial é:%lf \n",calculoSoma);	
}
else{
printf("Soma final é:%lf \n",calculoSoma);
}
}while(numero!=999);

}
int main(){
setlocale(LC_ALL,"Portuguese");
somaNumero();
}
