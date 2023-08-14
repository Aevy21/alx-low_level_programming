#include <stdio.h>

#define PRINT_FILENAME\
       	printf("%s\n", __FILE__)

int main() 
{
    PRINT_FILENAME;
    return (0);
}

