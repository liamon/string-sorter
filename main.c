#include "string_sorter.h"

int main(int argc, char *argv[]) {
	sortStrings(argc - 2, &argv[2]); // Minus the executable name and file name
	writeToFile(argc - 2, argv[1], &argv[2]);
	return 0;
}
