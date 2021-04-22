#include <stdio.h>

void inplace_swap(int *x,int *y){
    *y=*x^*y;
    *x=*x^*y;
    *y=*x^*y;
}

void reverse_array(int a[],int cnt){
    int first,last;
    for(first=0,last=cnt-1;
    first<=last;
    first++,last--){
        inplace_swap(&a[first],&a[last]);
    }
}

void main(){

    int b[5]={1,2,3,4,5};
     reverse_array(&b,5);
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    // 最后一次交换 swap(b[2],b[2]) 
    // a^a=0 加法逆元
    printf("\n");

    int a[4]={1,2,3,4};
    reverse_array(&a,4);
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
        // printf("%.2x",a[i]);
    }
    printf("\n");
}