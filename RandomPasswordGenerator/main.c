#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int length;
    printf("Length: (number between 4 and 32)\n");
    scanf("%d", &length);

    while (length < 4 || length > 32)
    {
        printf("Password length must be between 4 and 32!\n");
        scanf("%d", &length);
    }

    int useD;
    printf("Include digits? (yes-1)(no-0):\n");
    scanf("%d", &useD);

    int useS;
    printf("Include symbols? (yes-1)(no-0):\n");
    scanf("%d", &useS);

    char* password = malloc(length + 1);

    char* digits = "0123456789";
    char* lowc = "abcdefghijklmnopqrstuvwxyz";
    char* upc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* symbols = "~!@#$%^&*=+-/<>";

    int digits_length = strlen(digits);
    int lowc_length = strlen(lowc);
    int upc_length = strlen(upc);
    int symbols_length = strlen(symbols);

    srand(time(NULL) * getpid());

    for (int i = 0; i < length; i++)
    {
        int char_type = rand() % 4;

        if (useD && char_type == 0)
        {
            password[i] = digits[rand() % digits_length];
        }
        else if (char_type == 1)
        {
            password[i] = lowc[rand() % lowc_length];
        }
        else if (char_type == 2)
        {
            password[i] = upc[rand() % upc_length];
        }
        else if (useS && char_type == 3)
        {
            password[i] = symbols[rand() % symbols_length];
        }
    }
    password[length] = '\0';
    printf("Password: %s\n", password);
    free(password);
    return 0;
}
