public class compare1 {
    public static void main(String[] args) {
        String str = "hello";
        String str1 = "hiii";

        for (int i = 0; i < str.length(); i++) {
            int count = 0;
            for (int j = 0; j < str1.length(); j++) {
                if (str.charAt(i) == str1.charAt(j)) {
                    count++;
                }
            }
            System.out.println("Number of '" + str.charAt(i) + "' in str1: " + count);
        }
    }
}
