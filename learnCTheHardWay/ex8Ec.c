#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;

    if (argc == 1) {
        printf("You have no arguments. You suck.\n");
    } else if (argc == 2) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 2 && argc < 5) {
        printf("Here's your arguments.\n");

        for (i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else if (argc > 1000) {
        printf("I'm betting you piped variables into here.\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }

    return 0;
}
