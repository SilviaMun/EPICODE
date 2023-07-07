#include <stdio.h>
#include <wininet.h>

void sub_401000() {
    int var_4;
    
    int dwReserved = 0;
    int lpdwFlags = 0;

    InternetGetConnectedState(&lpdwFlags, dwReserved);

    var_4 = lpdwFlags;

    if (var_4 == 0) {
        printf("Success: Internet Connection\n");
    } else {
        printf("Error 1.1: No Internet\n");
    }
}

int main() {
    sub_401000();

    return 0;
}
