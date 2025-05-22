#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MfilenDCS(FILE *file1, FILE *file2, FILE *outputFile) {
    char str1[15], str2[15];
    int commonExists = 0;

    char *read1 = fgets(str1, 15, file1);
    char *read2 = fgets(str2, 15, file2);

    if (read1) str1[strcspn(str1, "\n")] = '\0';  // Remove newline from str1
    if (read2) str2[strcspn(str2, "\n")] = '\0';  // Remove newline from str2

    while (read1 != NULL && read2 != NULL) {
        int cmp = strcmp(str1, str2);

        if (cmp < 0) {
            fprintf(outputFile, "%s\n", str1);  // Corrected /n to \n
            read1 = fgets(str1, 15, file1);
            if (read1) str1[strcspn(str1, "\n")] = '\0';  // Remove newline
        }
        else if (cmp > 0) {
            fprintf(outputFile, "%s\n", str2);  // Corrected /n to \n
            read2 = fgets(str2, 15, file2);
            if (read2) str2[strcspn(str2, "\n")] = '\0';  // Remove newline
        }    
        else {
            // Common string found
            fprintf(outputFile, "%s\n", str1);  // Write the common string
            commonExists = 1;
            read1 = fgets(str1, 15, file1);
            read2 = fgets(str2, 15, file2);
            if (read1) str1[strcspn(str1, "\n")] = '\0';
            if (read2) str2[strcspn(str2, "\n")] = '\0';
        }
    }

    // Handle remaining strings in file1
    while (read1 != NULL) {
        fprintf(outputFile, "%s\n", str1);
        read1 = fgets(str1, 15, file1);
        if (read1) str1[strcspn(str1, "\n")] = '\0';
    }

    // Handle remaining strings in file2
    while (read2 != NULL) {
        fprintf(outputFile, "%s\n", str2);
        read2 = fgets(str2, 15, file2);
        if (read2) str2[strcspn(str2, "\n")] = '\0';
    }

    if (!commonExists) {
        printf("No common strings found\n");
    }
}

int main() {
    FILE *file1, *file2, *outputFile;

    file1 = fopen("USN1.txt", "r");
    if (file1 == NULL) {
        printf("Could not open file1.txt\n");
        return 1;
    }

    file2 = fopen("USN2.txt", "r");
    if (file2 == NULL) {
        printf("Could not open file2.txt\n");
        fclose(file1);
        return 1;
    }

    outputFile = fopen("USN3.txt", "w");  // Use "w" for writing
    if (outputFile == NULL) {
        printf("Could not open output file (USN3.txt)\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    MfilenDCS(file1, file2, outputFile);

    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    return 0;
}
