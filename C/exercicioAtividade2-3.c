#include<stdio.h>
int main()
{
int valor[5], i, soma=0,maior=0;
for(i=0; i<5; i++)
{
printf("Qual o %do valor?\n ", i+1);
scanf("%d", &valor[i]);
soma=soma+valor[i];
}
for(i=0; i<5; i++)
{
	if(valor[i]>maior){
	maior=valor[i];	
	}
	
}
printf("A soma vale: %d", soma);
printf("\n O maior numero : %d", maior);
getch();
}
