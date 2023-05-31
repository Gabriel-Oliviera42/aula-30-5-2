#include <stdio.h>

int main(void) {
  system ("clear");
  int N, Div, Quo;
  Quo = 0;
  
  printf("coloque o numero: ");
  scanf("%i",&N);
  printf("coloque o divisor: ");
  scanf("%i",&Div);
  while ((N - Div) >= 0 ) { // enquanto N - Div é menor ou iqual a 0 
    Quo++; // Quo = Quo + 1
    N = N - Div;
  }
  printf("o cociente é %i e sobra %i:\n",Quo,N);
  
  return 0;
}