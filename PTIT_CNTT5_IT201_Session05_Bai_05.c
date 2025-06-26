#include <stdio.h>
#include <string.h>

int isPalindrome(char str[],int left,int right) {
    if (left > right) {
        return 1;
    }
    if (str[left] != str[right]) {
        return 0;
    }
    return isPalindrome(str,left+1,right-1);
}
int main() {
    char str[50];
    printf("Enter Str: ");
    fgets(str, 50, stdin);
    str[strlen(str)-1] = '\0';
    int len = strlen(str);
    int result = isPalindrome(str,0,len-1);
    if (result == 1) {
        printf("Is a Palindrome\n");
    }
    else {
        printf("Is Not a Palindrome\n");
    }
}