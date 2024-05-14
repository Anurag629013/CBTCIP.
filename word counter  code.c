/*Anurag Kumar Singh :-Word Counter code*/
#include <stdio.h>

int main() {
  FILE *fptr;
  char filename[100], ch;
  int words = 0, lines = 1, characters = 0;

  printf("Enter the filename: ");
  scanf("%s", filename);

  fptr = fopen(filename, "r");

  if (fptr == NULL) {
    printf("Error! Could not open the file.\n");
    return 1;
  }

  while ((ch = fgetc(fptr)) != EOF) {
    characters++;

   
    if (ch == ' ' || ch == '\t' || ch == '\n') {
      words++;
    }

    
    if (ch == '\n') {
      lines++;
    }
  }

  fclose(fptr);

  printf("\nAnalysed Output:\n");
  printf("No of Words: %d\n", words);
  printf("No of Lines: %d\n", lines);
  printf("No of Characters: %d\n", characters);

  return 0;
}
