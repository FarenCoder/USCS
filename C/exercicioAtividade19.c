#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int contador=0,numero=0;
printf("================INICIO DO PROGRAMA=================\n");
  for(contador=0;contador<10;contador++){
  	numero++;
	  printf("%d,",numero);
  }
  printf("FIM");
  printf("\n================FIM DO PROGRAMA=================\n");
return 0;
}

