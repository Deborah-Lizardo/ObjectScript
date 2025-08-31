package Memory;

public class StackOverflow {
    // Recursive method without a base case, causing Stack Overflow
    public static void infiniteMethod(int num) {
        System.out.println("Calling the method with number: " + num);
        // Calls itself indefinitely without a stopping condition
        // This will keep adding new frames to the stack, causing a Stack Overflow
        infiniteMethod(num + 1);
    }
    public static void main(String[] args) {
        // Calling the method with an initial number, which causes an infinite recursion
        // This results in Stack Overflow due to too many function calls
        infiniteMethod(1);
    }
}
