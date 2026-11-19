
#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    int days;

    for (int month = JAN; month <= DEC; month++) {
        switch (month) {
            case FEB:
                days = 28;
                break;

            case APR:
            case JUN:
            case SEP:
            case NOV:
                days = 30;
                break;

            default:
                days = 31;
        }

        printf("Month %d = %d days\n", month, days);
    }

    return 0;
}
