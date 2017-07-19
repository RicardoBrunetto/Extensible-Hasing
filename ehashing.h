#ifndef E_HASHING_H
#define E_HASHING_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALHA   0
#define SUCESSO 1

typedef int TipoChave;

typedef struct{
  int id;
  int profundidade;
  int count;
  TipoChave * chaves;
}Bucket;

typedef struct{
  Bucket * bucket_ref;
}Celula;

typedef struct{
  Celula * celulas;
  int Profundidade_Global;
  int Bucket_Size;
}Diretorio;

Diretorio * inicializar_diretorio(int profundidade);
void print_diretorio(Diretorio * d);
int op_add(Diretorio *d, TipoChave chave);

#endif