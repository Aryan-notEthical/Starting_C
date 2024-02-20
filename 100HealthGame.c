#include <stdio.h>

int main()
{
    unsigned int Health = 100;
    char Enter[2];
    printf("Author - aryan_not_ethical(Instagram) \n");
    printf("Health: %d \n", Health);

    while (1)
    {
        printf("Press Enter to decrease health >>> ");
        scanf("%c", &Enter);

        if (Enter != "\n")
        {
            printf("Health: %d\n", Health -= 10);
            if (Health == 0)
            {
                printf("Game Over! Health depleted");
                return 0;
            }
        }
    }

    return 0;
}