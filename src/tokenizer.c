
#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c) //true if c is a tab or space, and not zero
{
  if((c == '/t' || c == ' ') && c != 0) {
    return 1;
  }
  return 0;
}

int non_space_char(char c) //true if c is not a tab or space, and not zero
{
  if ((c != '/t' || c != ' ') && c != 0) {
    return 1;
  }
  return 0;
}

/*Returns a pointer to the first character of the next
  space-seperated word in zero-terminated str. Return a zero
  pointer if str does not contain any words.*/
char *word_start(char *str)
{
  while(space_char(*str)){
    str++;
  }
  return str;
}

//Returns a pointer terminator char following *word
char *word_terminator(char *word)
{
  while(non_space_char(*word){
      word++
  }
  return word;
}

//counts the number of words in the string argument
int count_words(char *str)
{
  int count = 0;
  int i;
  
  for(i = 0; str[i] != '\0';i++){
    if(space_char(str[i])){
      count++;
    }
  }
  return count;
}

/*Returns a freshly allocated zero-terminated vector of freshly 
  allocated space seperated tokens from zero terminated str*/
char *copy_str(char *inStr, short len)
{
  char copyStr = (char*)malloc((len +1) * sizeof(char));
  int i;

  for(i = 0;i < len; i++){
    copyStr[i] = inStr[i];
  }
  copyStr[len] = '\0';
  return copyStr;
}
  
/*Returns a freshly allocated zero-terminated vector of freshly allocated
  space seperated tokens from zero terminated str */
char **tokenize(char* str)
{
  int numWords = count_words(str);
  char **tokens = (char**)malloc((numWords + 1) * sizeof(char*));
  char *wordStart = word_start(str);
  char *termWord = word_terminator(str);
  
  int i;
  for(i = 0; i < numWords; i++){
    tokens[i] = copy_str(startWord, termWord-startWord);
    startWord = word_start(termWord);
    termWord = word_terminator(startWord);
  }
  token[i] = '\0';
  return tokens;
}

//print all tokens
void print_tokens(char **tokens)
{
  int i;
  for(i = 0; *(tokens[i]) != '\0'; i++){
    printf("%s\n", tokens[i]);
  }
}

//frees all tokens and the vector containing them
void free_tokens(char **tokens)
{
  int i;
  for(i = 0; *(tokens[i]) !='\0'; i++){
    free(tokens[i]);
  }
}
