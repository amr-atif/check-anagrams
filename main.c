#include <stdio.h>
#include <string.h>

int check (char*str1,char*str2);
int main()
{
    char str1[100],str2[100];
    printf("Hello!\nplease enter the first string  ");
    gets(str2);
    printf("please enter the second string   ");
    gets(str1);
    if (check(str1,str2)==1)
        printf("anagrams");
    else  printf("not anagrams");

    return 0;
}
    int check (char*str1,char*str2)
{
    int scc1[256]={0},scc2[256]={0};
    if (strlen(str1)!= srtlen(str2)) {return 0;}
    for(int i=0;str1[i]!='\0';i++)
    {
        scc1[str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        scc2[str2[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if (scc1[i]!=scc2[i])
            return 0;
    }
    return 1 ;
    }
