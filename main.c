#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE* integer_file;
    integer_file = fopen("self-describing.in", "r");
    int counter = 0;
    int testCase_array[100];
    
    int testCase_length;
    char self_describing = 'T';
    int testCases;
    fscanf(integer_file,"%d", &testCases); //the first line of the file is extracted
    
    for (int i = 0; i<testCases;i++){
      char testCase[100];
      fscanf(integer_file,"%s",&testCase);
      testCase_length = strlen(testCase);
      for(int i = 0;i < testCase_length; i++){
        testCase_array[i] = testCase[i] - '0';
      }
      for (int count = 0;count<testCase_length;count++){
        for (int i = 0; i<testCase_length; i++){
          if (testCase_array[i] == count){
            count++;
          }
        }
        if(count == testCase_array[counter]){
          self_describing = 'T';
        }
        else{
          break;
        }
        counter = 0;
        if (self_describing != 'F'){
          printf("Self-describing\n");
          break;
        }
      }
    }
    fclose(integer_file);
    return 0;
}

