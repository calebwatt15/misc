#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0, y = 0;;
    
    for (y = 1; y < argc; y++) {
    for (i = 0; argv[y][i] != '\0'; i++) {
        char letter = argv[y][i];
        if(letter < 96)
        {
            letter += 32;
        }   
            if (letter == 'a')
            {
                printf("%d: 'a'\n", i);
            }

            else if (letter == 'e')
            {      
                printf("%d: 'e'\n", i);
            }

            else if (letter == 'i')
            {
                printf("%d: 'i'\n", i);
            }

            else if (letter == 'o')
            {
                printf("%d: 'o'\n", i);
            }

            else if (letter == 'u')
            {
                printf("%d:'u'\n", i);
            }

            else if (letter == 'y')
            {
                // why i > 2? is this a bug?
                if (i > 2) {
                    //it's only sometimes Y
                    printf("%d: 'y'\n", i);
                }
                //break;
            }

            else
            {
                printf("%d: %c is not a vowel\n", i, letter);
            }
            
       }
    }

    return 0;
}
