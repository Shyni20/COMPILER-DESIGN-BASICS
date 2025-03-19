#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100
// Define a list of keywords
const char *keywords[] = {"if", "else", "while", "for", "int", "float", "char", "return"};
const int numKeywords = 8;

// Function to check if a string is a keyword
int isKeyword(const char *word) {
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>');
}

int main() {
    FILE *file;
    char filename[MAX];
    char ch, word[MAX];
    int i = 0;
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1;
    }

    printf("Tokens identified:\n");
    while ((ch = fgetc(file)) != EOF) {
        if (isalnum(ch)) { // Check for alphanumeric characters
            word[i++] = ch;
        } else if (isspace(ch) || isOperator(ch) || ch == ';' || ch == ',') {
            if (i > 0) {
                word[i] = '\0';
                i = 0;
                if (isKeyword(word)) {
                    printf("Keyword: %s\n", word);
                } else {
                    printf("Identifier: %s\n", word);
                }
            }
            if (isOperator(ch)) {
                printf("Operator: %c\n", ch);
            }
        }
    }
    fclose(file);

    return 0;
}
