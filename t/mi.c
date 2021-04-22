#include <stdio.h>

// 幂:循环
unsigned mi_loop(unsigned a,unsigned m)
{
    unsigned result;
    for (int i=0;i<m;i++){
        result*=a;
    }
    return result;
}

// 幂：迭代，每次迭代减一
unsigned mi_iterative(unsigned a,unsigned m){
    // 非0为true，!m等价m==0
    if(!m){
        return 1;
    }
    unsigned b=mi_iterative(a , m - 1);
    return a * b;
    // return a*mi_iterative(a , m - 1);
}

// 幂：快速迭代,每次迭代右移一位
unsigned mi_fast_iterative(unsigned a , unsigned m)
{
    // if(m=0)
    if (!m){
        return 1;
    }
    // if (m%2=0) 
    // m&1>0 -> m的最低位是1 -> m是奇数
    if (m & 1){
        // a^m=a*(a^2)^(m/2)
        return a * mi_fast_iterative(a * a , m >> 1);
    }
    // a^m=(a^2)^(m/2)
    return mi_fast_iterative(a * a , m >> 1);
}

void main(){
   printf("%d",mi_iterative(2,4));
   printf("%d",mi_fast_iterative(2,5));
}