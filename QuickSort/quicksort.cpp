//
//  quicksort.cpp
//  QuickSort
//
//  Created by Richard Michael on 8/29/19.
//  Copyright © 2019 Richard Michael. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>

void printArr(int arr[],int s){
    for(int i =0;i<s;i++){
        if(i==s-1){
            std::cout << arr[i];
        }else{
            std::cout << arr[i] << " ";
        }
    }
}

void swap(int* V1, int* V2){
    int temp = *V1;
    *V1 = *V2;
    *V2 = temp;
}

void partition(int arr[],int lo, int hi, int& i, int& j){
    if(hi-lo<=1){
        if(arr[hi]<arr[lo]){
            swap(&arr[hi],&arr[lo]);
        }
        i = lo;
        j = hi;
        return;
    }
    int m = lo;
    int pivot = arr[hi];
    
    while(m<=hi){
        if(arr[m]<pivot){
            swap(&arr[m++], &arr[lo++]);
        }else if(arr[m]==pivot){
            m++;
        }else if(arr[m]>pivot){
            swap(&arr[m], &arr[hi--]);
        }
    }
    
    i = lo-1;
    j=m;
        return;
    }

void quickSort3P(int arr[],int lo,int hi){
    if(lo>=hi){
        return;
    }
    int i,j;
    partition(arr, lo, hi, i, j);
    
    quickSort3P(arr, lo, i);
    quickSort3P(arr, j, hi);
    
}

*/
