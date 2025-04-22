// In this exercise, you will create an 'executive decision aid.' This 
// is a program that answers yes, no, or maybe to a question 
// entered at the keyboard. To create this program use an array 
// of character pointers and initialize them to point to these three 
// strings. 'Yes", "No", and 'Maybe. Rephrase the question"" . Next, 
// input the user's question and find the length of the string. Next, 
// use this formula to compute an index into the pointer array: 
// index = length % 3


#include <stdio.h>
#include <string.h>

int main(void)
{
    char *answers[3] = {"Yes", "No", "Maybe. Rephrase the question."};
    char question[80];
    int length, index;

    printf("Enter your question: ");
    gets(question); // take input

    length = strlen(question); // find the length of the string
    index = length % 3; // compute the index

    printf("%s\n", answers[index]); // print the answer

    return 0;
}