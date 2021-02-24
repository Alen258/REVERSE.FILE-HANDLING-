#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch, fname[30], newch[300];
    int i=0, j, C=0;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    if(!fp)
    {
        printf("ERROR");
        getch();
        return 0;
    }
    printf("\nINPUT TO THE REVERSE FUNCTION:\n");
    ch = getc(fp);
    while(ch != "\0")
    {
        C++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n");
    printf("OUTPUT IS:\n");
    for(j=(C-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
}
