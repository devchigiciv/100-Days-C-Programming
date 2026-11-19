
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result = SUCCESS;

    switch (result) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}
