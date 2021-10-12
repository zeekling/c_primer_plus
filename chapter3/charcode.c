#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;

    printf("Please input a Character\n");
    scanf("%c", &ch);
    printf("The Code for %c is %d.\n", ch, ch);
    
    return 0;
}
