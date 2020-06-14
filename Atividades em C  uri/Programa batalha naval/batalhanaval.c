#include <stdio.h>
int main() {
  int vetor1[10]={1,2,3,4,5,6,7,8,9,10};
  char vetor2[10]={'A','B','C','D','E','F','G','H','I','J'};
  for(int i=0;i<10;i++){
    printf("%d\n",vetor1[i]);
    for(int j=0;j<10;j++){
      printf("%c",vetor2[j]);
    }
    printf("\n");
  }
}