#include <stdio.h>

int main() {
   int a,b,i,count=0,c,d,p=1,q=1,sum,e;
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++)
   {
    c = i;
    d = i;



    while(i!=0)
    {
        e=i%10;
        sum+=e;
        i/=10;


        count++; // count the digits
    }
    while(p<count)
    {
        q*=10;
    }
    printf("%d %d",count , q);
   /* if((c%10) == 1 && (d/q) == 1)
    {
        if((sum*sum)%8=0)
        {

        }
    }
   }*/
   }


    return 0;
}
