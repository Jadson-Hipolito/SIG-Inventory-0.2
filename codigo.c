#include <stdio.h>
int menu = 0;
int main(){
 printf("\n=====================================\n");
 printf("=== Menu Inventario ===\n");
 printf("=====================================\n");
 printf("1 - Produtos\n");
 printf("2 - Funcionarios\n");
 printf("3 - Entrada e Saida\n");
 printf("0 - Finalizar Programa\n");
 printf("=====================================\n");
 printf("Escolha uma opção: ");
 scanf("%d", &menu);
 switch (menu) {
   case 1:
    printf("\n=====================================\n");
    printf("=== Menu Produtos ===\n");
    printf("=====================================\n");
    printf("1 - Cadastra Produto Novo\n");
    printf("2 - Excluir Produto\n");
    printf("3 - Mudar Quantidade do Produto\n");
    printf("0 - Finalizar Programa\n");
    printf("=====================================\n");
    printf("Escolha uma opção: ");
    break;
}
}
