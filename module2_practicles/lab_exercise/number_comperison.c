#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers (separated by spaces): ");
    scanf("%d %d %d",&a,&b,&c);
    int largest, smallest;

    
    if (a >= b && a >= c) {
        largest = a;
    }
    else if (b >= a && b >= c) {
        largest = b;
    }
    else {
        largest = c;
    }

    
    if (a <= b && a <= c) {
        smallest = a;
    }
    else if (b <= a && b <= c) {
        smallest = b;
    }
    else {
        smallest = c;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

