//A C Program to check whether the alphabet is Vowel or Consonant.               © Ishav Verma 18/March/2021
//The letters A, E, I, O and U are called vowels & the remaining ones are calles consonants.
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: \n");
    scanf("%c", &c); //It will take alphabet as input entered by user.
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');//it will check if entered alphabet is vowel of lower case
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');//it will check if entered alphabet is vowel of upper case
    if (lowercase_vowel || uppercase_vowel)// this if statement will check if vowel is of lower case or upper case
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}