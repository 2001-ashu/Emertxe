#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
 
    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    /*  open the file for reading */
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c",ch);
        
    }
    fclose(fptr);
}
