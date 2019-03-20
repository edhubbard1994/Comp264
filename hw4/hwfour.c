#include <stdio.h>
#include <stdlib.h>

long decode2(long x, long y, long z){
     x -= y;
    z *= y;
    long temp = z;
    temp = temp << 15;
    temp = temp >> 31;
    temp = z^temp;
    return temp;
}

int main(){
    long a,b,c = 2;
    decode2(a,b,c);
    return 0;
}