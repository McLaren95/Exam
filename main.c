#include "library.h"
#include <stdio.h>
int main(){
    hello();
    printf("Enter the  array: ");
    int a[5];
    inputArray_(a,5);
    outputArray_(a,5);
}