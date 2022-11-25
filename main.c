#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE * selfFile;
  selfFile = fopen("self.txt", "r");
  int counter = 0;
  char testCase[100];
  int testCase_array[100];
  int testCase_length; 

  while (fgets(testCase, 100, selfFile)){
    testCase[strcspn(testCase,"\n")]='\0'; 
    // printf("%s",testCase);
    if (counter>=1){
      testCase_length = strlen(testCase);
      for (int i = 0; i < testCase_length; i++) {
        testCase_array[i] = testCase[i] - '0';
      }
     for (int m = 0; m< testCase_length; m++) {
        for (int i = 0; i< testCase_length; i++) {
          if (testCase_array[i] == m) {
            counter++;
          }
        }
        if(counter == testCase_array[m]){
          printf("Self-describing\n");
        }
        else{
          printf("\n");
          printf("Not self-describing\n");
          break;
        }
     }
    }
  }
  fclose(selfFile);
  return 0;
}

