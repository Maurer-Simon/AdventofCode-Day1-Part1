#include <ctype.h>

// Function to extract the first and last digits from a string and return the combined integer
int extractFirstAndLastDigit(const char *inputString) {
	int firstDigit = -1, lastDigit = -1;

	// Loop through the characters in the input string
	while (*inputString) {
		if (isdigit(*inputString)) {
			// If the first digit is not yet set, set it to the current digit
			if (firstDigit == -1) {
				firstDigit = *inputString - '0';
			}
			// Always update the last digit as we iterate through the string
			lastDigit = *inputString - '0';
		}
		inputString++;
	}

	// Check if at least one digit was found in the string
	if (firstDigit != -1) {
		// If the first and last digits are the same, return the combined integer
		if (firstDigit == lastDigit) {
			return firstDigit * 10 + lastDigit;
		} else {
			return firstDigit * 10 + lastDigit;
		}
	}
	// Return -1 to indicate that no digit was found in the string
	return -1; // Indicates no digit found
}