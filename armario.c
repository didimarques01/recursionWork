#include <stdio.h>
#include <stdlib.h>
// Define o n´umero m´aximo de vagas
#define MAX 10
    void armarios(int armario) {
    // Verifica se o n´umero de vagas ´e v´alido
      if(armario > MAX){
        printf("Numero invalido");
      }
    if(0 < armario && armario <= MAX) {
      armarios(armario - 1);  
      printf("Numero de vagas ocupadas: %d\n", armario);
    }
}
int main() {
int armario;
// Exibe o n´umero m´aximo de vagas 
     printf("Armarios! Vagas %d\n", MAX);
     printf("Insira o numero de armarios disponiveis: ");
// Recebe o n´umero de vagas a serem ocupadas
     scanf("%d", &armario);
     armarios(armario);
  return 0;
}