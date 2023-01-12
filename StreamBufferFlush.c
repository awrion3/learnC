# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void clearRB(void)
{
    while(getchar() != '\n');
}

int main(void)
{
    char perID[7];
    char name[10];

    fputs("input six numbers: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    clearRB(); //clear string from read buffer

    fputs("input name: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("numbers: %s \n", perID);
    printf("name: %s \n", name);

    return 0;
}