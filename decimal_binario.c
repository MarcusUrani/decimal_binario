#include <math.h>
#include <string.h>

int main(void) {
  char binario[31];
  int i = 0, decimal = 0;
  scanf("%s", binario);
  int tam = strlen(binario);
  for(i=0; i<tam;i++) {
    decimal *= 2;
    decimal += (binario[i] - '0');
  }
  printf("%d\n", decimal);
  return 0;
}