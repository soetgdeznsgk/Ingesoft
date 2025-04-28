#include <stdio.h>
#include <stdlib.h>

char *filename = "WSS_2025-04-28T2043.json";

// objetivo: al ingresarle un número "n", imprimir todos los  atributos del registro n 

int main(){

  FILE* archivo = fopen(filename, "r");
  char buffer[1000];

  
  if(archivo == NULL){
    printf("Error!\n");
    fclose(archivo);
    return -1;
  }

  int leidos_correctamente = fread(buffer, sizeof(char) * 50,50, archivo);

  for(int i = 0; i < leidos_correctamente; i++){
    printf("%c", buffer[i]);
  }
  
  printf("\n");

  
  fclose(archivo);
  return 1;
}
