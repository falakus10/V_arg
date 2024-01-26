#include <stdio.h>
#include <stdarg.h>

int find_smallest(int arg_count, ...);

int main() {
    printf("Numbers: 14, 18, 51, 6, 27, 3\n");
    printf("The smallest number: %d", find_smallest(6, 14, 18, 51, 6, 27, 3));
    return 0;
}

int find_smallest(int arg_count, ...) {
    int smallest_number, taken_number;
    va_list args;
    va_start(args, arg_count);
    smallest_number = va_arg(args, int);
    for (int i = 1; i < arg_count; i++) {
        if ((taken_number = va_arg(args, int)) < smallest_number)
            smallest_number = taken_number;
    }
    va_end(args);
    return smallest_number;
}
