#ifndef __LISTA_H__
#define __LISTA_H__

typedef struct _celula {
    struct _celula *proxima;
    char nome[30];
    float massa;
    float altura;
    float imc;
} CELULA;

typedef CELULA *PTR_CELULA;

typedef struct _lista {
    PTR_CELULA inicio;
    int tamanho;
} LISTA;

typedef LISTA *PTR_LISTA;

PTR_LISTA criar_lista();
void inserir_aluno(PTR_LISTA lista);
void buscar_aluno(PTR_LISTA lista);
void remover_especifico(PTR_LISTA lista);
void excluir_todos(PTR_LISTA lista);
int salvar(PTR_LISTA lista);
int salvar_binario(PTR_LISTA lista);
int carregar(PTR_LISTA lista);
float retorna_media_imc(PTR_LISTA lista);//Lucas
void retorna_desvio_padrao(PTR_LISTA lista);//Gabriel

//Parte do Samuel com o Davi
void retorna_maior_altura(PTR_LISTA lista);
void retorna_menor_altura(PTR_LISTA lista);
void retorna_maior_massa(PTR_LISTA lista);
void retorna_menor_massa(PTR_LISTA lista);
void ordena(PTR_LISTA lista);
#endif
