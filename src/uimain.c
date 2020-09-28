#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

#define MAX 1000

int main()
{
  char choice;
  List *history = init_history();

  while(1){
    printf("Please select an option:\n");
    printf("To input Tokens select -> t\n");
    printf("To view history select -> h\n");
    printf("To free history select -> f\n");
    printf("To quit -> q\n");
    scanf("%c", &choice);

    
    if(choice == 't'){
      printf("Please enter a sentence to use:\n");
      scanf("%s", &string);

      char **tokens = tokenize(string);
      print_tokens(tokens);
      add_history(history, string);
      free_tokens(tokens);
    }
    else if(choice == 'h'){
      printf("The entire history\n");
      print_history(history);
    }
    else if(choice == 'f'){
      printf("freeing the history\n");
      free_history(history);
    }
    else if(choice == 'q'){
      printf("Goodbye!\n");
      return 1;
    }
    else{
      printf("Invalid option");
    }
  }
}
    
