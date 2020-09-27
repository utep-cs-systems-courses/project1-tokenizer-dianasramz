
#include <studio.>
#include <stdlib.h>
#include "tokenizer.h"

int space_char(char c)
{
  if((c == '/t' || c == ' ') && c != 0) {
    return 1;
  }
  return 0;
}

int non_space_char(char c)
{
  if ((c != '/t' || c != ' ') && c != 0) {
    return 1;
  }
  return 0;
}

char *word_start(char *str);

