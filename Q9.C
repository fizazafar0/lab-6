#include <stdio.h>

int main() {
    char word[100], reverse[100];
    int length = 0;
    int vowelCount = 0, consonantCount = 0;
    int isPalindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("\n1. Original Word: %s\n", word);

    while(word[length]!= '\0') {
        length++;
    }
    printf("2. Length of word = %d\n", length);

    for(int i = 0; i < length; i++) {
        reverse[i] = word[length - 1 - i];
    }
    reverse[length] = '\0';
    printf("3. Reversed Word: %s\n", reverse);

    for(int i = 0; i < length; i++) {
        if(word[i]!= reverse[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome) {
        printf("4. %s is a Palindrome\n", word);
    } else {
        printf("4. %s is NOT a Palindrome\n", word);
    }

    for(int i = 0; i < length; i++) {
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if((ch >= 'a' && ch <= 'z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
    printf("5. Number of Vowels = %d\n", vowelCount);
    printf("6. Number of Consonants = %d\n", consonantCount);

    return 0;
}