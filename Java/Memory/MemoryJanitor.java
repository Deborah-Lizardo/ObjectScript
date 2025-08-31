package Memory;

public class MemoryJanitor {
    public static void main(String[] args) {
        Integer[] ptr = new Integer[1]; // Equivalent to allocating memory for an integer in the heap

        ptr[0] = 10;

        // Printing the stored value
        System.out.println("Value stored: " + ptr[0]);
        // No need to manually deallocate memory
        // The Garbage Collector will automatically free memory

        // End of the main function - ptr is no longer used so GC will handle it when needed.
        System.out.println("Memory will be cleaned up automatically by the Garbage Collector when no longer referenced.");
    }
}
