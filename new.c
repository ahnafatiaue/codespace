#include <stdio.h>

int main() {
   int x,total_steps=0,remaining,a;
   scanf("%d",&x);
   a = x/5;
   remaining = x%5;

   total_steps+=a;
   remaining/=4;




    return 0;
}
