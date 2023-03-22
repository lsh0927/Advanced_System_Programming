#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

        int x,y;

        unsigned ux,uy;

        x=0x80000001;
        if (x<0 && x*2>=0) //
                printf("#1 Passed! (x:%d)\n", x);
        else
                printf("#1 Failed! (x:%d)\n", x);

        ux = -1;  // 수정
        if (ux > -2)
                printf("#1 Passed! (ux:%u)\n", ux);
        else
                printf("#1 Failed! (ux:%u)\n", ux);
        x = 0x0;  // 수정
        y = 0x80000000;  // 수정
        if (x>y && -x>-y)
                printf("#1 Passed! (x,y:%d,%d)\n", x,y);
        else
                printf("#1 Failed! (x,y:%d,%d)\n", x,y);

        x = 10;  // 수정
        y = -10;  // 수정
        if (x>>3 == x/8 && y>>3 != y/8)
                printf("#1 Passed! (x,y:%d,%d)\n", x,y);
        else
                printf("#1 Failed! (x,y:%d,%d)\n", x,y);
}

//unsigned bit와 2's complement, bit shift에 대해 생각해보자