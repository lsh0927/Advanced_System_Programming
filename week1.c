#include <stdio.h>
#include <stdlib.h>

typedef unsigned char *byte_pointer; //1byte=char

void show_bytes(byte_pointer start, size_t len) {
        int i;
        for(i=0;i<len;i++)
                printf(" %.2x",start[i]);
        printf("\n");
}

void  show_int(unsigned long long x){
        show_bytes((byte_pointer)&x,sizeof(unsigned long long)); //same value but casting

}

int main(){
        unsigned long long x,y;
        printf("Input a long number:");
        scanf("%llu",&x);//type? 
        printf("Input a long number:");
        scanf("%llu",&y);

        printf("x : %llx\n",x);
        printf("y : %llx\n",y);
        printf("x<<8:%llx\n",x<<8);
        printf("x>>8 %llx\n",x,x>>8);
        printf("x&y: %llx\n",x&y);
        printf("x|y: %llx\n",x|y);
        printf("x&!y: %d\n",x&!y);
        printf("x&&y: %d\n",x&&y);
        printf("x||y: %d\n",x||y);
        printf("x&&~y: %d\n",x&&~y);

        show_int(x);
        printf("\n");

        unsigned long long result2 = x >> 8;
        show_int(result2);
        printf("\n");

        unsigned long long result3 = x << 8;
        show_int(result3);
        printf("\n");

}
                                                                                             
            