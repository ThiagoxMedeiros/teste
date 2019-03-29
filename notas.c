#include <stdio.h>
char notas[50];
int main (void){
	
	int nota,soma,i,cont;
	float media;
	soma=0;
	cont=0;
	for(i=0;i<50;i++){
		printf("digite a nota do aluno:");
		scanf("%d",&nota);
		notas[i]=nota;
		soma=soma+notas[i];
	}
	media=soma/50;
	for(i=0;i<50;i++){
		if(notas[i]>media){
			cont=cont+1;}
			}
	printf("media: %f\n",media);
	printf("qtd de notas acima da media: %d\n",cont);

	
	
	return 0;
	

}
