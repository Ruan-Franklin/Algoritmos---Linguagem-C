#include <stdio.h>
int main(){
  int contador;
  int numero=1;  
  for(contador=1;contador<=10;contador++){  // Dentro do for é necessário criar uma condição. O código tem um ciclo, enquanto ele não for atingido, o programa continua rodando. No caso desse exemplo, enquanto o contador for menor ou igual a 10. o for tem a seguinte hierarquia: definir variável>condição(enquanto) e consequência (operação realizada, enquanto a condição não estiver completa)
    contador++; //Dentro do for, essa variável já recebe a instrução de adicionar +1, por isso que quando defino aqui, passa a ir de 2 em 2.;
    printf("%d\n",contador);
  }
  return 0;
}
