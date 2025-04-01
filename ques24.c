 #include<stdio.h>
int main() {
    char str[100], rev[100];
    int i, j, len = 0, flag = 1;
    printf("Enter a string: ");
    gets(str);
    while (str[len] != '\0') {
        len++;
    }
    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
    return 0;
}
