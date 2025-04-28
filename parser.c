#include <stdio.h>
#include <stdlib.h>

char *filename = "";

// objetivo: al ingresarle un número "n", imprimir todos los  atributos del registro n 

int main(){

  FILE* archivo = fopen(filename, "r");

  if(archivo == NULL){
    printf("Error!\n");
    return -1;
  }

  

  
  fclose(archivo);
  return 1;
}
