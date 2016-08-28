#include<stdio.h>
#include"print.h"

void print(int* l,int length){
    for(int i=0;i<length;i++){
        printf("%d ",l[i]);
    }
    printf("\n");
}
