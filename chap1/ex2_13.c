#include <stdio.h>

void main(){
    int d= 0b11111101;
    int mask =0b0000;
    int result= bis(d,mask);
    printf("%d",result);
}


//位设置:以m为掩码,若m位置上为1,则将z相应位设置为1
int bis(int x,int m) {
    int z = x | m;
    return z;
}
//位清除:以m为掩码,若m位置上为1,则将z相应位设置为0
int bic(int x,int m) {
    int z = x & (x ^ m);
    return z;
}