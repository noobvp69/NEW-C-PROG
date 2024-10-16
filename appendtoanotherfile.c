#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    // Get the names of the source and destination files
    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file %s\n", sourceFileName);
        exit(1);
    }

    // Open the destination file in append mode
    destFile = fopen(destFileName, "a");
    if (destFile == NULL) {
        printf("Cannot open destination file %s\n", destFileName);
        fclose(sourceFile);
        exit(1);
    }

    // Read from the source file and write to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File content appended successfully.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

