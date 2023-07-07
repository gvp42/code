#include <stdio.h>

// Two global variables
int global_var1;
int global_var2;

// Two functions
void function1() { }
void function2() { }

int main() {
    // Two static variables
    static int static_var1;
    static int static_var2;

    // Two local variables
    int local_var1;
    int local_var2;

    printf("Addresses of static variables:\n");
    printf("static_var1: %p\n", &static_var1);
    printf("static_var2: %p\n", &static_var2);

    printf("\nAddresses of local variables:\n");
    printf("local_var1: %p\n", &local_var1);
    printf("local_var2: %p\n", &local_var2);

    printf("\nAddresses of functions:\n");
    printf("function1: %p\n", function1);
    printf("function2: %p\n", function2);
    printf("main: %p\n", main);

    printf("\nAddresses of global variables:\n");
    printf("global_var1: %p\n", &global_var1);
    printf("global_var2: %p\n", &global_var2);

    return 0;
}
