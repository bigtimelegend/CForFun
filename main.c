#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//just some c code fun

static int a = 64;
static int b = 37;


#define wwe 43
#define ufc 32
#define big 55
#define PI 3.1456
void example(int x, int y, int z) {

    if (x >y-z ) {
        printf("You got it right");

    }

    if (z <y ) {



            printf("You are good at C");

    }

else {

    printf("You suck");
}

}

int main()
{
    example(9, 80, 79);



    if ((wwe < ufc) && (ufc > big)) {

        printf("hahahaha");
    }


    return 0;
}
