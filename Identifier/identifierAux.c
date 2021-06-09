// ----------------------------------------------------------------
// ESPECIFICAÇÃO: O programa deve determinar se um identificador
// é ou não válido. Um identificador válido deve começar com uma
// letra e conter apenas letras ou dígitos. Além disto, deve ter
// no mínimo 1 caractere e no máximo 6 caracteres de comprimento
// ----------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include "identifier.h"

int valid_s(char ch) {
  if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    return 1;
  else
    return 0;
}

int valid_f(char ch) {
  if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
    return 1;
  else
    return 0;
}

int testFunction(char *teste) {
  char achar;
  int  length, i , valid_id;
  length = strlen(teste);
  length = 0;
  printf("Identificador: ");
  achar = teste[0];
  valid_id = valid_s(achar);

  for(i=0;i<=length;i++) {
    if(!(valid_f(achar))) {
      valid_id = 0;
    }
    achar = teste[i];
    i++;
  }
 if (valid_id && (length >= 1) && (length <= 6)) {
    printf("Valido\n");
    return 0;
  }
  else {
    printf("Invalido\n");
    return 1;
  }
}
int main(void){
  char teste1[7] = "asdwfg";
  char teste2[8] = "1asdwfg";
  char teste3[4] = "1ba";
  char teste4[1] = "";
  char teste5[5] = "de1r";
  char teste6[3] = "a1";

  testFunction(teste1);
  testFunction(teste2);
  testFunction(teste3);
  testFunction(teste4);
  testFunction(teste5);
  testFunction(teste6);
  return 0;
}