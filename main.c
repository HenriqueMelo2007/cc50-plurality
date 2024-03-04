#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char candidateName[100];
  int votes;
} Candidate;



int main(int argc, char const *argv[])
{

  if (argc < 2) {
    printf("Define at least one candidate.");
    return 1;
  }
  
  int voters;
  int numberOfCandidates = argc - 1;

  printf("Number of voters:");
  scanf("%i", &voters);

  Candidate candidates[voters];

  for (int i = 0; i < numberOfCandidates; i++) {
    strcpy(candidates[i].candidateName, argv[i + 1]);
    candidates[i].votes = 0;
  }


  
  
  return 0;
}
