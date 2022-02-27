#include <string.h>
#include <stdio.h>

int language = 0;

int greetuser(char *name) {
  char hello[64];

  if (language == 1)
    strcpy(hello, "Hyvää päivää ");
  else if (language == 2)
    strcpy(hello, "Goedemiddag! ");
  else if (language == 0)
    strcpy(hello, "Hello! ");

  strcat(hello, name);
  return puts(hello);
}

int main(int argc,char **argv) {
  char str1[40];
  char str2[32];
  char *lang;

  if (argc == 3) {
    strncpy(str1, argv[1], 40);
    strncpy(str2, argv[2], 32);

    lang = getenv("LANG");
    if (lang) {
      if (memcmp(lang, "fi", 2) == 0)
        language = 1;
      else if (memcmp(lang, "nl", 2) == 0)
          language = 2;
    }
    return greetuser(str1);
  }
  return 1;
}
