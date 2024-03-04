#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char candidateName[50];
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

  Candidate candidates[numberOfCandidates];

  for (int i = 0; i < numberOfCandidates; i++) {
    strcpy(candidates[i].candidateName, argv[i + 1]);
    candidates[i].votes = 0;
  }

 
  for (int i = 0; i < voters; i++) {
    char vote[50];
    printf("Vote: ");
    scanf("%s", &vote);
    printf("\n");

    for (int ii = 0; ii < numberOfCandidates; ii++) {
      int stringEquality = strcmp(vote, candidates[ii].candidateName);
     
      if ( stringEquality == 0 ) {
        candidates[ii].votes += 1;
        break;
      }
    }
    
  }
  


  
  
  return 0;
}
