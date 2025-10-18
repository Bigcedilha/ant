#include <stdio.h>
#include <stdlib.h>
#include "ant.h"

int main(int argc, char **argv){
  input_handling(argc, argv);
  return 0;
}

void inputHandling(int argv, char **argc){
  if (argv == 0){
    messages();
  } else {
    commands();
  }
  
}
