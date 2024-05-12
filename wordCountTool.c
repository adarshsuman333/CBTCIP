#include<stdio.h>

int main(){

    FILE *filePointer;
    int wordCount = 0;
    int linesCount = 0;
    int charcterCount = 0;
    char ch;

    filePointer = fopen("Virat.txt", "r");
    if (filePointer == NULL){
        perror("Error opening the file...");
        return(-1);
    }
    
    while ( (ch = fgetc(filePointer) ) != EOF){
        charcterCount++;

        if (ch == '\n')
            linesCount++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            if (charcterCount > 1) { 
                wordCount++;
            }
        }
    }
        
    fclose(filePointer);
    filePointer = NULL;

    printf("\nWord Count tool:\n");
    printf("  - Number of words: %d\n", wordCount);
    printf("  - Number of lines: %d\n", linesCount);
    printf("  - Number of characters: %d\n", charcterCount);
    
    return 0;
}