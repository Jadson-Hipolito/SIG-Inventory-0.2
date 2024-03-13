#include <stdio.h>
int menu = 0;
int main(){
 printf("\nSIG-Inventory - Sistema de Gerenciamento de inventario\n");
 printf("\nTem duas telas abaixo escolhendo 1 ou 2\n\n");
 scanf("%d", &menu);
 switch (menu) {
   case 1:
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     printf("\nTela 1 ainda sem função\n")   ;
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     break;
   case 2:
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     printf("\nTela 2 ainda sem função\n");
     printf("\n███████████████████████████████████████████████████████████████████"
          "█████████\n");
     break;
 }
}
