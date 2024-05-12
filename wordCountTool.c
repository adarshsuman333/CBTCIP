#include<stdio.h>

int main(){

    //Creating a file pointer
    FILE *filePointer;

    //Creating variables to store the count of words, lines and characters
    int wordCount = 0;
    int linesCount = 0;
    int charcterCount = 0;
    char ch;

    //Opening a file
    filePointer = fopen("Virat.txt", "r");

    //Checking for errors
    if (filePointer == NULL){
        perror("Error opening the file...");
        return(-1);
    }

    //Reading the file character by character
    while ( (ch = fgetc(filePointer) ) != EOF){
        charcterCount++;

        //Checking for newlines and incrementing the new lines 
        if (ch == '\n')
            linesCount++;

        //Checking for word separator and incrementing the word count
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            
            //Avoid counting empty lines as words
            if (charcterCount > 1) { 
                wordCount++;
            }
        }
    }

    //Closing the file pointer
    fclose(filePointer);

    //Setting the file pointer to null
    filePointer = NULL;

    //Displaying the output 
    printf("\nWord Count tool:\n");
    printf("  - Number of words: %d\n", wordCount);
    printf("  - Number of lines: %d\n", linesCount);
    printf("  - Number of characters: %d\n", charcterCount);
    
    return 0;
}
