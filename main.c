#include <stdio.h>
#include "extractFirstAndLastDigit.h"

int main()
{
    // Specify the path to the text file
    const char *fileName = "FILE PATH HERE"; //Example: E:\Programming\C Programming\AoC-D1\aoc1.txt

    // Open the file for reading
    FILE* file = fopen(fileName, "r");

    // Check if the file was opened successfully
    if(!file){
        printf("\n Unable to open : %s ", fileName);
        return -1;
    }

    // Array to store each line of the file
    char line[70];
    // Variable to store the sum of combined integers
    int sum = 0;

    // Read each line from the file
    while (fgets(line, sizeof(line), file)) {
		// Extract the combined integer from the current line
        int result = extractFirstAndLastDigit(line);
        // Check if at least one digit was found in the line
			if (result != -1) {
            // Add the combined integer to the sum
            sum += result;
        } else {
            // Continue to the next iteration if no digit was found in the line
            continue;
        }
    }

    // Print the total sum of combined integers
    printf("%d", sum);

    // Close the file
    fclose(file);

    // Return 0 to indicate successful execution
    return 0;
}