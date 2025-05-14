#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num-1; i++){
        printf("*\n", i);
            for(int j = 1; j <= i; j++)
                printf("*", i);
    }
    printf("*");
    return 0;
}
