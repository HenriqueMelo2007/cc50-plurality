#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char candidateName[100];
  int votes;
} Candidate;

int voters;

int main(int argc, char const *argv[])
{

  if (argc < 2) {
    printf("Define at least one candidate.");
    return 1;
  }
  
  return 0;
}
