#include <stdio.h>

int main() {
   int a,b,i,count=0,c,d,p=1,q=1,sum,e;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
    c = i;
    d = i;
    e=i;


    while(i!=0)
    {
        i/=10;
        

        count++; // count the digits
    }
    while(p<count)
    {
        q*=10;
    }
    if((c%10) == 1 && (d/q) == 1)
    {

    }
   }



    return 0;
}
