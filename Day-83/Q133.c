/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char str[20] = "";
    if (scanf("%19s", str) != 1) return 0;

    for (int i = 0; str[i]; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }

    enum Month m;
    if (strncmp(str, "JAN", 3) == 0) m = JAN;
    else if (strncmp(str, "FEB", 3) == 0) m = FEB;
    else if (strncmp(str, "MAR", 3) == 0) m = MAR;
    else if (strncmp(str, "APR", 3) == 0) m = APR;
    else if (strncmp(str, "MAY", 3) == 0) m = MAY;
    else if (strncmp(str, "JUN", 3) == 0) m = JUN;
    else if (strncmp(str, "JUL", 3) == 0) m = JUL;
    else if (strncmp(str, "AUG", 3) == 0) m = AUG;
    else if (strncmp(str, "SEP", 3) == 0) m = SEP;
    else if (strncmp(str, "OCT", 3) == 0) m = OCT;
    else if (strncmp(str, "NOV", 3) == 0) m = NOV;
    else if (strncmp(str, "DEC", 3) == 0) m = DEC;
    else {
        printf("Invalid month\n");
        return 1;
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }
    return 0;
}
