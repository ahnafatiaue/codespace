#include <stdio.h>

int main() {
   int x,total_steps=0,remaining,move,i;
   scanf("%d",&x);
   for(i=1;i<=5;i++)
   {
      move = x/i;
      remaining=x%i;
      total_steps+=move;


   }
   printf("%d",total_steps);




//gcc new.c -o a; ./a

    return 0;
}
