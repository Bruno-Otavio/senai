#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BUFFER 256

FILE *data, *output;

char dataFileName[] = "esquerda.in.txt";
char outputFileName[] = "esquerda.out.txt";

char newDirection(char direction, char left, char right) {
    char newPos;
    if (direction == 'E')
        newPos = left;
    else if (direction == 'D')
        newPos = right;
    return newPos;
}

int main() {
	setlocale(LC_ALL, "");

	char text[BUFFER];

    data = fopen(dataFileName, "r");

    if (data == NULL) {
        printf("Error - Couldn't open '%s'", dataFileName);
        return 1;
    }

    int i;
    while (fgets(text, BUFFER, data) != NULL) {
        int numDirections = atoi(strtok(text, " "));

        char directions[] = strtok(text, " ");
        char personDirection = 'N';

        for (i = 0; i < numDirections; i++) {
            if (personDirection == 'N')
                personDirection = newDirection(directions[i], 'O', 'L');
            else if (personDirection == 'S')
                personDirection = newDirection(directions[i], 'L', 'O');
            else if (personDirection == 'L')
                personDirection = newDirection(directions[i], 'N', 'S');
            else if (personDirection == 'O')
                personDirection = newDirection(directions[i], 'S', 'N');
        }
    }

    fclose(data);

    output = fopen(outputFileName, "w");

    if (data == NULL) {
        printf("Error - Couldn't open '%s'", dataFileName);
        return 1;
    }

	return 0;
}