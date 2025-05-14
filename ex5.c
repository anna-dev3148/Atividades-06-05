#include <stdio.h>

int main(){
    int num;
    char letra;

    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite a posição do triângulo([w], [a], [s], [d]).: ");
    scanf(" %c", &letra);
    
        if(letra == 'a' || letra == 'A'){
            for(int i = 1; i <= num-1; i++){
            printf("*\n", i);
                for(int j = 1; j <= i; j++)
                    printf("*", i);
            }
            printf("*");
        }
        
    return 0;
}
