#include<stdio.h>
#include<assert.h>

int add(int a, int b);

int main(void){

    assert(add(2,3)==5);

    assert(add(6,7)==13);

    assert(add(-4, 1)==-3);

    printf("All tests passed (plain C) ✅\n");
    return 0;
}



// Line-by-line (what’s happening)

// #include <assert.h> → gives you assert(expr). If expr is false, the program exits with an error = test failed.

// int add(int a, int b); → tells the compiler “add exists somewhere.” (defined in adder.c)

// assert(add(2, 3) == 5); → calls your function with known inputs and checks the result.

// If any assert fails, your test program stops immediately with an error → you found a bug.

// If all asserts pass, you print a success message.

// gcc test_adder_plain.c adder.c -o test_plain
// ./test_plain

// This will create test_plain.exe in the same folder (on Windows, .exe is automatic).