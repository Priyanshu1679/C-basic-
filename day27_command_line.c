#include <stdio.h>

int main() {

    FILE *fp;
    char text[100];

    // File open for writing
    fp = fopen("data.txt", "w");

    printf("Enter a line to write in file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    // File open for reading
    fp = fopen("data.txt", "r");

    printf("\nData from file:\n");

    while(fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}