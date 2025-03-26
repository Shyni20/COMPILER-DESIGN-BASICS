# COMPILER-DESIGN-BASICS

 **COMPANY** : CODTECH SOLUTIONS

 **NAME** : VASAMSETTI GRACE SHYNI

 **INTERN ID**  : CT08WBU

 **DOMAIN** : C PROGRAMMING

 **DURATION** : 4 WEEKS 

 **MENTOR** : NEELA SANTHOSH KUMAR

 **DESCRIPTION ON COMPILER DESIGN BASICS**

A lexical analyzer, often referred to as a lexer or scanner, is a fundamental part of a compiler or interpreter. Its primary role is to read input code and break it down into meaningful tokens, such as keywords, operators, and identifiers. This process is the first step of translating source code into executable instructions. 

A lexical analyzer processes a source code file character by character to identify:
 **Keywords**: Reserved words in a programming language, like `if`, `while`, `int`, etc.
 **Operators**: Symbols used for operations, such as `+`, `-`, `=`, `*`, etc.
 **Identifiers**: User-defined names for variables, functions, and other entities.

**Structure of the Lexical Analyzer Program**

**Include Necessary Libraries**  
   Start by including the `<stdio.h>` and `<ctype.h>` libraries. `<stdio.h>` handles input/output operations, and `<ctype.h>` provides functions for character classification, like `isalpha()` and `isdigit()`.

 **Define Keywords and Operators**  
  Create arrays to store keywords and operators for comparison during tokenization.
   
 **Token Classification**  
   Implement functions to classify input strings as keywords, operators, identifiers, or others.

 **File Input and Tokenization**  
   Open the source code file and process it character by character. Use **fgetc()** to read characters and accumulate them into a buffer until a delimiter (like a space or newline) is encountered.

 **Recognize Tokens**  
   Based on the accumulated buffer, determine if the token matches a keyword, operator, or identifier. For example:
  Keywords are matched using the **isKeyword()** function.
  Operators are checked by comparing individual characters.
  Identifiers are validated by ensuring the first character is alphabetic (`isalpha()`) and subsequent characters are alphanumeric (`isalnum()`).

**Error Handling**  
   Include checks for unrecognized tokens and handle errors gracefully.

 **Display Results**  
   Output the identified tokens along with their classifications for the user to verify.

 **CONCLUSION**
 **Keyword Detection**: Compares strings against an array of predefined keywords.
 **Operator Recognition**: Matches single-character symbols.
 **Identifier Handling**: Checks for valid names based on alphanumeric rules.
 **File Processing**: Reads input from a file, making it useful for analyzing actual source code.


**OUTPUT**

![Image](https://github.com/user-attachments/assets/9146675f-7c4b-4e62-9076-25352efa96fa)

