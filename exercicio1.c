#include <stdio.h>

main(){

  float numero;
  printf("Digite um número inteiro: ");
  scanf("%f", &numero);

  if(numero >= 0) {
  
    printf("A raiz quadrada do número digitado é: %.2f\n", sqrt(numero));
  
  } else{

    printf("O quadrado do número é: %.2f\n", numero * numero);
    
  }
  
}