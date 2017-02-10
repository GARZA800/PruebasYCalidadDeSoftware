#include <stdio.h>
#include <stdlib.h>
#include<cstring>

int main (int argc, char** argv)
{
    char array1[8];
    char array2[8];
    int value = 10;
    
    strcpy(array1, "arrayOne");
    strcpy(array2, "arrayTwo");
    
    printf("Array 1 is at %p with value %s\n", array1, array1);
    printf("Array 2 is at %p with value %s\n", array2, array2);
    printf("Value is at %p with value %d\n", &value, value);
    
     strcpy(array2, argv[1]);
    
    printf("Array 1 is at %p with value %s\n", array1, array1);
    printf("Array 2 is at %p with value %s\n", array2, array2);
    printf("Value is at %p with value %d\n", &value, value);
    
    return 0;
}