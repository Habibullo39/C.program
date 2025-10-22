#include <stdio.h>
int main(void){
    int scrable[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    char first[50];
    char second[50];
    char letter;
    int dore;
    int firres = 0;
    int secres = 0;

    printf("write a word\n");
    scanf("%49s",first);
    printf("write a word\n");
    scanf("%49s",second);

    for (int i = 0; first[i] != '\0'; i++){
        letter = first[i];
        dore = letter - 97;
        firres = firres + scrable[dore];
    }

    for (int i = 0; second[i] != '\0'; i++){
        letter = second[i];
        dore = letter - 97;
        secres = secres + scrable[dore];
    }

    printf("\"%d\" and \"%d\"\n",firres,secres);
    if (firres > secres){
        printf("Player 1 win!\n");
    }
    else if (secres > firres){
        printf("Player 2 win!\n");
    }
    else{
        printf("Tie!\n");
    }

    return 0;
}
