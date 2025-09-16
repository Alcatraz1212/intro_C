#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <cstdio>
using namespace std;



int average(int* arr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }
    printf("%d \n", sum);
    return sum/size;
}

int fibonacci(int n){
    int xn = 1;
    int xn1 = 1;
    for (int i = 0; i<n-1; i++){
        int s = xn+xn1;
        xn = xn1;
        xn1 = s;
    }
    return xn;
}


int main(){
    int arr[10] = {7,0,3,8,11,4,37,8,9,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", average(arr, size)); // Test average
    printf("%d\n", fibonacci(6)); // Test fibonacci
    return 0;
}