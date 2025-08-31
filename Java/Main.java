public class Main {
    public static void main(String[] args) {
        String[] magicBook = {
                "Magical bread recipe: flour, water, yeast.",
                "Quote of the day: Magic is in the details.",
                "Secret tip: Never reveal all the pages."
        };

        int totalPages = magicBook.length;

        for (int i = 0; i < totalPages; i++) {
            System.out.println("Page " + (i + 1) + ": " + magicBook[i]);
        }
    }
}
