#include <stdio.h>

int main() {
    const char* magic_book[] = {
        "Magical bread recipe: flour, water, yeast.",
        "Quote of the day: Magic is in the details.",
        "Secret tip: Never reveal all the pages."
    };

    int total_pages = sizeof(magic_book) / sizeof(magic_book[0]);

    for (int i = 0; i < total_pages; i++) {
        if (i < total_pages) {
            printf("Page %d: %s\n", i + 1, magic_book[i]);
        } else {
            printf("Error: Page %d does not exist.\n", i + 1);
        }
    }

    return 0;
}