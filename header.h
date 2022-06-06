#ifndef PONTOS_H_INCLUDED
#define PONTOS_H_INCLUDED

typedef struct ponto Ponto;
Ponto *gera_pto();
int set_pto(Ponto *x);
void libera_pto(Ponto **x);
float dist_ptos(Ponto *a, Ponto *b);
int get_pto(Ponto *x, int *a, int *b);

#endif // PONTOS_H_INCLUDED
