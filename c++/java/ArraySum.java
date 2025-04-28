public class ArraySum {
    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 4, 5};
        int[] arr2 = {1, 2, 3, 4, 5};

        int totalSum = 0;

        for (int num : arr1) {
            totalSum += num;
        }

        for (int num : arr2) {
            totalSum += num;
        }

        System.out.println("Total sum of arr1 and arr2: " + totalSum);
    }
}