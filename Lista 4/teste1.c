#include<stdio.h>

int main() {

 int num, i, resultado = 0;
 
 printf("Digite um numero: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 if (num==1)
    resultado=1;

 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);
 
 return 0;
}