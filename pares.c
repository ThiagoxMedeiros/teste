#include <stdio.h>

int main(void){
    int n1;
    int n2;
    float cont,resto;
//escolhendo os numeros    
    printf("escolha um numero:");
    scanf("%d",&n1);
    printf("escolha outro numero:");
    scanf("%d",&n2);
// percorrer a distancia entre os numeros e imprimir os numeros pares entre eles
    while(n2>=n1){
        resto=n2%2;    
        if(resto==0){
            printf("%f",resto);
            }
        n2--;
    }
    
    
    return 0;



}
