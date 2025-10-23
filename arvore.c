#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int numero;
    struct No *dir;
    struct No *esq;
}No;

No* newNo(int x){
    No* tmp = (No*) malloc(sizeof(No));
    tmp->numero = x;
    tmp->esq = NULL;
    tmp->dir = NULL;
    return tmp;
}

typedef struct Arvore{
    No *raiz;
}Arvore;


Arvore* newArvore(){
    Arvore* tmp = (Arvore*) malloc(sizeof(Arvore));
    tmp->raiz = NULL;
    return tmp;
}


No* inserirRec(int x, No* i){
    if(i == NULL){
        i = newNo(x);
    }else if( x > i->numero ){
       i->dir = inserirRec(x,i->dir);
    }else if( x < i-> numero){
      i->esq =  inserirRec(x,i->esq);
    }

    return i;
}

void preordem(No* i){
    if(i != NULL){
        printf("%d ",i->numero);
        preordem(i->esq);
        preordem(i->dir);
    }
}

void ordem(No* i){
    if(i != NULL){
        ordem(i->esq);
        printf("%d ",i->numero);
        ordem(i->dir);
    }
}

void posordem(No* i){
    if(i != NULL){
        posordem(i->esq);
        posordem(i->dir);
        printf("%d ",i->numero);
    }
}

void inserir(int x, Arvore* arvore){
    arvore->raiz = inserirRec(x,arvore->raiz);
}

int contNo2(No *i){
    int resposta = 0;
    if(i == NULL) return resposta;
    if(i->esq != NULL && i->dir != NULL){
        resposta++;
    }

    resposta += contNo2(i->esq);
    resposta += contNo2(i->dir);

    return resposta;
    
}

int main(){
    Arvore* arvore = newArvore();
    
    int array[] = {5,3,7,2,4,6,8};

    for(int i = 0; i < 7; i++){
        inserir(array[i],arvore);
    }
    
    preordem(arvore->raiz);
    printf("\n");
    ordem(arvore->raiz);
    printf("\n");
    posordem(arvore->raiz);
    printf("\n");

    printf("ContNo2 == %d\n",contNo2(arvore->raiz));


}
