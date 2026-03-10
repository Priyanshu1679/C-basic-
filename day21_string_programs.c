#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);

    // Reverse String
    printf("\nReversed string: ");
    for(i = length - 2; i >= 0; i--) {
        printf("%c", str[i]);
    }

    // Count Vowels
    int vowels = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
    }

    printf("\nNumber of vowels: %d\n", vowels);

    return 0;
}