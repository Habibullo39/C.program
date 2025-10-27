#include <stdio.h>
int main(void){
    int num;
    int each = 0;
    int meow = 0;
    int bov = 0;
    int res = 0;
    int final = 0;

    printf("write a number\n");
    scanf("%d",&num);

    while (meow == 0){
      while (bov == 0){
        each = num%10;
        res = res + each;
        if (num < 10){
          bov = 1;
        }
        else{
          num = num/10;
        }
      }

      bov = 0;
      final = final + res;
      if (res < 10){
        printf("%d",res);
        meow = 1;
      }
      else{
        printf("%d, ",res);
        num = res;
        res = 0;

      }
    }

    printf("\n");
    printf("result is \"%d\"\n",final);
    return 0;
}
