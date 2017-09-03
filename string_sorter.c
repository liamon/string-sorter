#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "string_sorter.h"

void sortStrings(int numStrings, char *strings[]) {
	int i = 0;  
	int j, first; // first as in alphabetically first
	char *temp = "";
	
	for (int k = 0; k < numStrings; ++k) {
		for (int l = 0; strings[k][l] != '\0'; ++l) {
			strings[k][l] = tolower(strings[k][l]);
		}
	}

	for (; i < numStrings - 1; ++i) { // Selection sort
		first = i;
		for (j = first + 1; j < numStrings; ++j) {
			if ((strcmp(strings[j], strings[first]) < 0)) {
				first = j;
			}
		}
		
		if (first != i) { // Make sure they are not the same
			temp = strings[i];
			strings[i] = strings[first];
			strings[first] = temp;
		}
	}
}

void writeToFile(int numStrings, char *filename, char *strings[]) {
	FILE *txtfile = fopen(filename, "w");
	
	for (int i = 0; i < numStrings; ++i) {
		fprintf(txtfile, "%s\n", strings[i]);
		printf("%s\n", strings[i]); // Printing to screen as in sample result given
	}
	fclose(txtfile);
}
