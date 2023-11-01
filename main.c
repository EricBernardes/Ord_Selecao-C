#include <stdio.h>
#include <time.h>
#define max 5

void selecao(int *v) {
int menor;

for(int i=0; i<max-1; i++){
    menor=i;
    for(int j=i+1; j<max; j++){
        if(v[j]<v[menor])
            menor=j;
    }
    if(i!=menor){
        int aux= v[i];
        v[i]= v[menor];
        v[menor]=aux;
    }
}
}


void imprimeVetor(int *v) {
  for (int i = 0; i < max; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  int v[max] = {5, 2, 1, 3, 4};
  selecao(v);
  imprimeVetor(v);
  return 0;
}
