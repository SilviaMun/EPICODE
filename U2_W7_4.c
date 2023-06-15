#include <stdio.h>

int main() {
    char buffer[10];
    printf("Type username:\n");
    scanf("%s", buffer);
    printf("\nYour username is: %s\n", buffer);
    
    // Segmentation fault
    buffer[30] = 'A';
    
    return 0;
}
