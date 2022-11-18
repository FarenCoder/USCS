#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double baseDoTriangulo=0, alturaDoTriangulo=0, calculoDaArea=0;
    printf("Digite a base do triangulo: \n");
    scanf("%lf",&baseDoTriangulo );
    printf("Digite a altura do triangulo: \n");
    scanf("%lf", &alturaDoTriangulo);
    calculoDaArea = (baseDoTriangulo*alturaDoTriangulo/2);
    printf("A área do triangulo é:%0.2f", calculoDaArea );
return 0;
}
