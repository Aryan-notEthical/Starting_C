#include <stdio.h>
void Bday(char name[])
{
    printf("--------------------------------------------------\n");
    printf("[+] Ayy yooo nigga happy birthday!! %s \n", name);
    printf("--------------------------------------------------\n");
}
int main()
{
    while (1)
    {   
        char name[] = "";
        printf("[+] Enter your name: ");
        scanf("%s", name);    
        Bday(name);
    }
}