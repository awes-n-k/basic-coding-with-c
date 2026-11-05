/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char word[30] = "";
    if (scanf("%29s", word) != 1) return 0;

    for (int i = 0; word[i]; i++) {
        word[i] = (char)toupper((unsigned char)word[i]);
    }

    enum Status status;
    if (strcmp(word, "SUCCESS") == 0) {
        status = SUCCESS;
    } else if (strcmp(word, "FAILURE") == 0) {
        status = FAILURE;
    } else if (strcmp(word, "TIMEOUT") == 0) {
        status = TIMEOUT;
    } else {
        printf("Unknown status\n");
        return 1;
    }

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }
    return 0;
}
