#include<stdio.h>
#include<string.h>

int main() {
    char buffer[30];
    printf("Come ti chiami?\n");
    fgets(buffer, 30, stdin); //fgets al posto di scanf per evitare buffer overflow
    
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0'; //rimuove newline input di fgets
    }
    
    printf("Il tuo nome: %s\n", buffer);
    printf("Indirizzo di memoria buffer: %p\n", (void*)buffer); //formatta indirizzo memoria
    
    return 0;
}

