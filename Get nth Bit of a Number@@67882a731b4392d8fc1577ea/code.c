#include <stdio.h>

int main() {
    int num, binary = 0, base = 1;
    scanf("%d", &num);

    while (num > 0) {
        int remainder = num % 2;   
        binary = binary + remainder * base;  
        num = num / 2; 
        base = base * 10; 
    }

    printf( "%d", binary);
    return 0;
}
