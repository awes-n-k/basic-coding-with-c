/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op_str[30] = "";
    int a, b;
    if (scanf("%29s %d %d", op_str, &a, &b) != 3) {
        return 0;
    }

    for (int i = 0; op_str[i]; i++) {
        op_str[i] = (char)toupper((unsigned char)op_str[i]);
    }

    enum Operation op;
    if (strcmp(op_str, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(op_str, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(op_str, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}
