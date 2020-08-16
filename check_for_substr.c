#include<stdio.h>
#include<math.h>
#include<string.h>

int check_for_substr(char str1[] ,char str2[]){
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int i,j,flag=-1,k;

    for(i=0;i<=l1-l2;i++){
        k=i;
        for(j=0;j<l2;j++){
            // printf("%d %d %d\n", i, k, j);
            if(str1[k]!=str2[j]) break;
            else{
                k++;
            }
        }
        if(j==l2) return i;
    }
    return flag;
}


void main()
{
    int flag;
    char str1[100] = "helloaaqib";
    char str2[100] = "aaqib";
    flag = check_for_substr(str1, str2);
    if(flag>=0) printf("string is found at %d", flag);
    else printf("sorry not found");
}




