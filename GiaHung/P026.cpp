#include <iostream>

int main() {

     int a, b, c, mod;



     scanf("%d", &a);

     scanf("%d", &b);


     scanf("%d", &c);





     if(a>b)

     {

      mod=a;

      a=b;

      b=mod;

     }

    if(b>c)

     {

     mod=b;

     b=c;

     c=mod;

     }

    if(a>b)

     {

     mod=a;

     a=b;

     b=mod;

     }

    printf("%d %d %d", a, b, c);
}