
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

char *word_start(char *str)//* to first (non-space) char in first word in s
{
  int i = 0;
  
  
}
