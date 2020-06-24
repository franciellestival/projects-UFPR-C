/*
E8) Faça um programa que leia 10 números inteiros e apresente o maior 
(não utilize vetor/matriz).
*/

#include <stdio.h>
int main( void ) {
	int i, num = 0, maior = 0;
	printf("Digite 10 numeros inteiros:\n");

    for (i = 1; i <=10; i++) {
        printf("%2do.: ", i);
        scanf("%d", &num);
       
        if (num > maior) maior = num;
    }

	printf("Maior numero: %d", maior);
}