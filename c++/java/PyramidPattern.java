public class PyramidPattern {
    public static void main(String[] args) {
        int rows = 5; // Change this to make a bigger/smaller pyramid

        for (int i = 1; i <= rows; i++) {
            // Print spaces before stars
            for (int j = i; j < rows; j++) {
                System.out.print(" ");
            }

            // Print stars
            for (int k = 1; k <= (2 * i - 1); k++) {
                System.out.print("*");
            }

            // Move to the next line
            System.out.println();
        }
    }
}
