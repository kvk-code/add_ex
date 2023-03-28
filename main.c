#include <stdio.h>
#include "add_numbers.h"

int main() {
    int a = 5;
    int b = 7;
    int sum = add_numbers(a, b);

    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}
