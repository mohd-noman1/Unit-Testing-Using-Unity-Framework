#include "math_utils.h"
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int* get_null_pointer(void){
    return NULL;
}

int* get_valid_pointer(void){
    int* p=(int*)malloc(sizeof(int));
    *p=42;
    return p;
}