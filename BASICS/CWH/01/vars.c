//ALWAYS KEEP VARIABLE NAME READABLE IN LONG PROJECTS / BIG PROJECTS 
// BUT REMEMBER WHEN TO USE SHORTER NAMES LIKE IN EXAM

#include <stdio.h>

int main() {
    // ✅ VALID VARIABLE NAMES

    int age = 30;                     // Starts with a letter
    float height_in_cm = 175.5;       // Uses underscore
    char initial = 'S';               // Single character
    int _score = 95;                  // Starts with underscore
    int number123 = 123;              // Includes digits after first character
    int ThisIsCamelCase = 1;          // CamelCase (valid but less common in C)
    int this_is_snake_case = 2;       // Snake_case (preferred in C)
    int g_globalCount = 10;           // Prefix for scope (optional convention)
    int __private = 5;                // Double underscore (valid, but reserved in some contexts)

    // ❌ INVALID VARIABLE NAMES (commented out to avoid compile errors)

    // int 123number = 123;           // ❌ Starts with digit
    // float float = 3.14;           // ❌ Uses reserved keyword
    // char my-name = 'A';           // ❌ Hyphen not allowed
    // int my score = 100;           // ❌ Space not allowed
    // int @value = 50;              // ❌ Special character
    // int long_variable_name_exceeding_thirty_one_characters_limit = 1; // ⚠️ Older compilers may truncate

    // ✅ DISPLAYING VALID VARIABLES
    printf("Age: %d\n", age);
    printf("Height: %.1f cm\n", height_in_cm);
    printf("Initial: %c\n", initial);
    printf("Score: %d\n", _score);
    printf("Number123: %d\n", number123);
    printf("CamelCase: %d\n", ThisIsCamelCase);
    printf("Snake_case: %d\n", this_is_snake_case);
    printf("Global Count: %d\n", g_globalCount);
    printf("Private: %d\n", __private);

    return 0;
}