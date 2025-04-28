#include <stdio.h>
#include <stdlib.h>

char *filename = "";



int main(){

  FILE* archivo = fopen(filename, "r");

  if(archivo == NULL){
    printf("Error!\n");
    return -1;
  }
  return 1;
}
