#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
  int howmn;
  char name[20];
  int meow = 0;
  int biggest = 0;
  char *resname[20];
  int lennames = 0;
  int lenresnames = 0;

  printf("how many times vote\n");
  scanf("%d",&howmn);

  char *names[howmn];
  int results[howmn];

  for (int i = 0;i < howmn;i++){
      scanf("%19s",name);
      meow = 0;

      if (i == 0){
         names[0] = malloc(strlen(name) + 1);
         strcpy(names[0],name);
         results[0] = 1;
         lennames = 1;
         continue;
      }
      for (int j = 0; j < lennames;j++){
        if (strcmp(names[j],name) == 0){
            results[j] = results[j] + 1;
            meow = 1;
        }
      }
      if (meow == 0){
        int kiryu = lennames;
        names[kiryu] = malloc(strlen(name) + 1);
        strcpy(names[kiryu],name);
        results[kiryu] = 1;
        lennames = lennames + 1;
      }
  }

  int k = lennames;
  for (int r = 0; r < k; r++){
    if (r == 0){
      biggest = results[0];
      resname[0] = names[0];
      lenresnames = 1;
    }
    else{
      if (results[r] > biggest){
        biggest = results[r];
        resname[0] = names[r];
        lenresnames = 1;
      }
      else if (results[r] == biggest){
        resname[lenresnames] = names[r];
        lenresnames = lenresnames + 1;
      }
    }
  }

  printf("\nelection winner is ");
  for (int h = 0; h < lenresnames; h++){
     printf("%s, ",resname[h]);
  }
  printf("and %d times voted\n",biggest);

  for (int i = 0;i < lennames;i++){
    free(names[i]);
  }
  return 0;
}
