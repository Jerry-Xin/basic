#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include "sorts.h"

int main()
{
    int a[] = {1,5,4,3,7,9,8,6,0};
    int length = sizeof(a)/sizeof(int);
    print(a,length);
    //insertSort(a,length);
    //bInsertSort(a,length);
    //bSort(a,length);
    //int step[] = {5,3,1};
    //shellSort(a,length,step,3);
    //quickSort(a,length);
    simpleSelectSort(a,length);
    print(a,length);
    return 0;
}
