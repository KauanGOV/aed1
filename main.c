#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"


struct ponto{
  int coord_x, coord_y;
};
typedef struct ponto Ponto;

Ponto *gera_pto() {
    Ponto *pto;

    pto = (Ponto *) malloc(sizeof(Ponto));

    return pto;
}

int set_pto(Ponto *x) {
    if(x == NULL) {
        printf("\n======Ponto nao existente======\n");
        return 1; //FALHA
    }

    int a, b;

    printf("Digite, respectivamente, as coordenadas x e y para criar um ponto: ");
    scanf("%d %d", &a, &b);
    x->coord_x = a;
    x->coord_y = b;

    return 0; //SUCESSO
}

void libera_pto(Ponto **x) {
    if(*x == NULL) {
        printf("\n======O ponto nao foi criado======\n");
    }

    free(*x);
    *x = NULL;
}

float dist_ptos(Ponto *a, Ponto *b) {
    if(a == NULL || b == NULL) {
        printf("\n======Um dos (ou os dois) pontos nao foi/foram criado(s)======\n");
        return 1;//FALHA
    }

    int x, y;
    float resultado;

    x = (a->coord_x) - (b->coord_x);
    y = (a->coord_y) - (b->coord_y);
    resultado = sqrt((x * x) + (y * y));

    return resultado;
}

int get_pto(Ponto *x, int *a, int *b) {
    if(x == NULL) {
        printf("\n======O ponto nao existe======\n");
        return 1;//FALHA
    }

    *a = x->coord_x;
    *b = x->coord_y;

    return 0;//SUCESSO
}
