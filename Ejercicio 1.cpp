#include <stdio.h>
#include <conio.h>

int main() {
  // Declarar las variables
  int numero1, numero2, numero3;
  char orden[10];

  // Leer los números
  printf("Ingrese el primer número: ");
  scanf("%d", &numero1);

  printf("Ingrese el segundo número: ");
  scanf("%d", &numero2);

  printf("Ingrese el tercer número: ");
  scanf("%d", &numero3);

  // Comparar los números
  if (numero1 < numero2 && numero2 < numero3) {
    strcpy(orden, "ascendente");
  } else if (numero3 < numero2 && numero2 < numero1) {
    strcpy(orden, "descendente");
  } else {
    strcpy(orden, "no ordenado");
  }

  // Emitir un mensaje
  printf("Los números están en orden %s.\n", orden);

  getch();
  return 0;
}
