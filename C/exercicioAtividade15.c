#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double temperaturaConversor=0,temperaturaF=0;
    printf("Digite a temperatura em graus Fahrenheit: \n");
    scanf("%lf",&temperaturaF );
    temperaturaConversor = ((temperaturaF - 32) * 5)/9;
    printf("A temperatura é: %0.2f", temperaturaConversor );
return 0;
}

