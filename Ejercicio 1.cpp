#include <stdio.h>
#include <conio.h>

int main() {
  // Declarar las variables
  int numero1, numero2, numero3;
  char orden[10];

  // Leer los n�meros
  printf("Ingrese el primer n�mero: ");
  scanf("%d", &numero1);

  printf("Ingrese el segundo n�mero: ");
  scanf("%d", &numero2);

  printf("Ingrese el tercer n�mero: ");
  scanf("%d", &numero3);

  // Comparar los n�meros
  if (numero1 < numero2 && numero2 < numero3) {
    strcpy(orden, "ascendente");
  } else if (numero3 < numero2 && numero2 < numero1) {
    strcpy(orden, "descendente");
  } else {
    strcpy(orden, "no ordenado");
  }

  // Emitir un mensaje
  printf("Los n�meros est�n en orden %s.\n", orden);

  getch();
  return 0;
}
