#include <stdio.h>
#include <stdlib.h>

int main (){
//LEITURA
    int *ptr = malloc(5 * sizeof(*ptr));
        
    if(ptr == NULL){
        printf("Erro! Falha na alocacao.");
        return 1;
    }

    printf("Digite os numeros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", ptr + i);
    }
    
// LÓGICA DA QUESTÃO
    
    int new_size;

    printf("Quantos numeros deseja acrescentar: ");
    scanf("%d", &new_size);

    if(new_size == 0){
        printf("Obrigado por utilizar nossos serviços.");
        return 0;
    }
    
    new_size += 5;
    
    void *ptr_aux = realloc(ptr, new_size * sizeof(*ptr));
    
    if(ptr_aux == NULL) {
      printf("Falha na realocacao.");
      return 1;
    }else{
      ptr = ptr_aux;
    }

    printf("Digite os proximos valores: ");
    for(int i = 5; i < new_size; i++){
        scanf("%d", ptr + i);
    }

    printf("O conjunto completo: \n");
    for(int i = 0; i < new_size; i++){
        printf("%d\n", ptr[i]);
    }
    
    free(ptr);
    ptr = NULL;
    return 0;   
}
