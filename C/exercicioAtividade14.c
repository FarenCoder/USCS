#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double temperaturaConversor=0,temperaturaC=0;
    printf("Digite a temperatura em graus celsius: \n");
    scanf("%lf",&temperaturaC );
    temperaturaConversor = (9 * temperaturaC + 160)/5;
    printf("A temperatura é: %0.2f", temperaturaConversor );
return 0;
}

