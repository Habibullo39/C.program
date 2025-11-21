#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    int howmany;
    char word[20];
    int num;

    printf("how many words\n");
    scanf("%d",&howmany);

    char *letters[50];
    char *letter = malloc(2);
    int times[50];
    int meow = 0;
    int len = 0;
    printf("write a words\n");
    for (int i = 0; i < howmany; i++){
        scanf("%s",word);
        for (int j = 0; j < strlen(word); j++){
            meow = 0;
            letter[0] = word[j];
            letter[1] = '\0';
            if (i == 0 && j == 0){
                letters[0] = malloc(2);
                strcpy(letters[0],letter);
                times[0] = 1;
                len = 1;
            }
            else{
                for (int k = 0; k < len; k++){
                  if (strcmp(letter,letters[k]) == 0){
                    times[k] = times[k] + 1;
                    meow = 1;
                  }
                }
                if (meow == 0){
                  letters[len] = malloc(2);
                  strcpy(letters[len],letter);
                  times[len] = 1;
                  len = len + 1;
                }

            }
        }
    }
    char resletters[20];
    int restimes = 0;
    for (int i = 0; i < len; i++){
        if (times[i] > restimes){
            restimes = times[i];
        }
    }
    printf("The most common letter is ");
    for (int i = 0; i < len; i++){
        if (times[i] == restimes){
            printf("%s, ",letters[i]);
        }
    }
    printf("and it appeared %d times\n",restimes);

    for (int i = 0; i < len; i++){
        printf("%s",letters[i]);
        if (i != len - 1){
            printf(", ");
        }
    }
    printf("\n");
    for (int i = 0; i < len; i++){
        printf("%d",times[i]);
        if (i != len - 1){
            printf(", ");
        }
    }
    printf("\n");

    free(letter);
    for (int i = 0; i < len; i++){
        free(letters[i]);
    }
    return 0;
}
