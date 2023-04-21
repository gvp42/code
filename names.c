#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("names.txt", "r");

    if (file == NULL) {
        printf("Error: Unable to open the file.\n");
        exit(1);
    }

    printf("Names from the text file:\n");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
