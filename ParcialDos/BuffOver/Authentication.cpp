#include <stdio.h>
#include <stdlib.h>
#include<cstring>
/* Program that checks the authentication of a password*/

int function(char * pass){
    
    int res = 0;
    char arrayPass[9] = "12345678";
    
    strcpy(arrayPass, pass);
    
    if(strcmp(arrayPass, "123456789") == 0)
    {
        res = 1;
    }
    
    return res;
    
}

int main (int argc, char** argv)
{
    if (function(argv[1]))
        printf("Permission granted\n");
    else 
        printf("Permission denied\n");
}