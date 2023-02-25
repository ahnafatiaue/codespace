#include <stdio.h>

int main() {
   int x,total_steps=0,remaining,a;
   scanf("%d",&x);
   a = x/5;
   remaining = x%5;
 total_steps+=a;
   a = remaining/4;
   remaining%=4;
    total_steps+=a;
     a = remaining/3;
   remaining%=3;
   total_steps+=a;
    a = remaining/2;
   remaining%=2;
   total_steps+=a;
    a = remaining/1;
   remaining%=1;     gcc new.c -o a; ./a
   total_steps+=a;
   printf("%d",total_steps);






    return 0;
}
