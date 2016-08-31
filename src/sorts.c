#include"sorts.h"
#include"print.h"

void bSort(int* l,int length){
    int change=1;
    for(int i=(length-1);i>0 &&change ;i--){
        change = 0;
        for(int j=0;j<i;j++){
            if(l[j] > l[j+1]){
                change = 1;
                int tmp = l[j+1];
                l[j+1] = l[j];
                l[j] = tmp;
            }
        }
    }
}

void insertSort(int* l,int length){
    int i=1;
    int j = 0;
    for(i=1;i<length;i++){
        if(l[i] > l[i-1]){
            continue;
        }
        int current = l[i];
        for(j = i-1; j>=0 && current <l[j];j--){
            l[j+1] = l[j];
        }
        l[j+1] = current;
    }
}

void bInsertSort(int* l,int length){
    for(int i=1;i<length;i++){
        int low = 0;
        int high = i-1;
        int current = l[i];
        while(low<=high){
            int mid = (low+high)/2;
            if(l[mid] >l[i]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        for(int j=(i-1);j>high;j--){
            l[j+1] = l[j];
        }
        l[high+1] = current;
    }
}

void shellInsert(int* src,int length,int step){
    for(int i= step;i<length;i++){
        if(src[i] > src[i-step]){
            continue;
        }
        int current = src[i];
        int j=i-step;
        for(j=i-step;j>=0 && current <src[j];j=j-step){
            src[j+step] = src[j];
        }
        src[j+step] = current;
    }
}

void shellSort(int* l,int length,int step[],int steplength){
    for(int i=0;i<steplength;i++){
        shellInsert(l,length,step[i]);
    }
}

void __quickSort(int* l,int start,int end){
    if(start>=end){
        return;
    }
    int key = l[start];
    int low = start;
    int high = end;
    while(start<end){
        while( start<end && key < l[end] ) --end;
        l[start] = l[end];
        while(start<end && key>l[start]) ++start;
        l[end] = l[start];
    }
    l[start] = key;
    __quickSort(l,low,start-1);
    __quickSort(l,start+1,high);
}

void quickSort(int* l,int length){
    __quickSort(l,0,length-1);
}

void simpleSelectSort(int* l,int length){
    for(int i=0;i<length;i++){
        int min = i;
        for(int j=i;j<length;j++){
            if(l[j] <l[min]){
                min = j;
            }
        }
        int tmp = l[i];
        l[i] = l[min];
        l[min] = tmp;
    }
}
