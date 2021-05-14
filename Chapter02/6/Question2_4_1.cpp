#include <cstring>
#include <cstdio>
using namespace std;

int main(void)
{
    char str1[150] = "ABCabc";
    char str2[10] = "DEFdef";
    char str3[2000];
    printf("%s's length: %d\n",str1,int(strlen(str1)));
    printf("str1: %s\n",str1);
    printf("str2: %s\n",str2);
    strcat(str1,str2);
    printf("str1: %s\n",str1);
    printf("Before copy str3: %s\n",str3);
    strcpy(str3,str1);
    printf("After copy str3: %s\n",str3);
    printf("strcmp with str1, str2: %d\n",strcmp(str1,str2));
    return 0;
}