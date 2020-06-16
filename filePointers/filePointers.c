#include<stdio.h>

struct emp
{
    char name[10];
    int age;
};

int main()
{
    struct emp e;
    FILE *p,*q;
    p = fopen("one.txt", "a");
    q = fopen("one.txt", "r");
    printf("Enter Name and Age:\n");
    scanf("%s %d", e.name, &e.age);
    fprintf(p,"%s %d", e.name, e.age);
    fclose(p);
    do
    {
        fscanf(q,"%s %d", e.name, &e.age);
        printf("%s %d", e.name, e.age);
    }
    while(!feof(q));
}

/*int main()
{
    FILE *fp;
    char ch;
    fp = fopen("one.txt", "w");
    printf("Enter data...");
    while((ch = getchar()) != EOF)
    {
        putc(ch, fp);
        
    }
    fclose(fp);
    fp = fopen("one.txt","r");
    
    while((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
        
        fclose(fp);
        
    }
    return 0;
}
*/
