public class heart {
    public static void main(String[] args) {
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 15; j++) {
                if (j >= 4 - i && j <= 4 + i || j >= 12 - i && j <= 12 + i) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for (int i = 1; i <= 8; i++) {
            for (int j = 2; j <= i; j++) {
                System.out.print(" ");
            }
            for (int k = 8; k >= i; k--) {
                System.out.print("*");
            }
            for (int l = 7; l >= i; l--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}