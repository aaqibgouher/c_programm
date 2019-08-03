#include<stdio.h>
#include<string.h>

void main()
{
    char name[100] = "Aaqib";
    int n = strlen(name);
    int i;
    char k;
    for(i=0;i<n/2;i++){
        k=name[i];
        name[i] = name[n-1-i];
        name[n-1-i] = k;
    }
    printf("%s ",name);
}
