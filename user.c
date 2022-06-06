#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    float result;
    Ponto *x, *y;

    x = gera_pto();
    y = gera_pto();

    set_pto(x);
    set_pto(y);

    result = dist_ptos(x, y);

    printf("\nA distancia entre os dois pontos criados eh: %f\n", result);

    libera_pto(&x);
    libera_pto(&y);

    return 0;
}
