#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
  for (i=1; i<argc; i++)
    printf("Argumentul %d este: %s\n", i, argv[i]);

  exit(0);
}

// Sunt studenta la Poli.