import java.util.Scanner;

class Libary {
    String[] a;

    Libary(String[] a) {
        this.a = a;
        Scanner sc = new Scanner(System.in);
    }

    void showaAvailableBooks() {

        for (int i = 0; i < a.length; i++) {
            System.out.println(i + 1 + ":- " + a[i]);
        }
    }

    void issueBook() {
        Scanner sc = new Scanner(System.in);
        System.out.println("how many books do you like to issue?");
        int m = sc.nextInt();
        if (m <= 3) {
            System.out.println("which books do you like to issue? (pls enter the book no.)");
            for (int i = 0; i < m; i++) {
                int b = sc.nextInt();
                System.out.println("you enter for issue book : " + a[b]);
            }
        } else {
            System.out.println("sorry! you have issue maximum three books at a time");
        }

    }

    void returnBook() {
        Scanner sc = new Scanner(System.in);
        System.out.println("how many books do you like to return?");
        int n = sc.nextInt();
        System.out.println("which books do you like to return? (pls enter the book no.)");
        for (int i = 0; i < n; i++) {
            int z = sc.nextInt();
            System.out.println("you enter for return book : " + a[z]);
        }
    }

    void donateBook() {
        Scanner sc = new Scanner(System.in);
        String a[] = new String[15];

        String s = sc.nextLine();
        for (int i = 0; i < a.length; i++) {
            a[a.length - 1] = s;
        }
    }

}

public class ex4_Libary {
    public static void main(String[] args) {
        /*
         * you have implement a libary using java class Libary
         * methods:issue book ,return book,show available books,add book
         * properties:array to store available books,array to store issue books
         */
        // String[] books = new String[13];
        String books[] = { "Anna Karenina", "Madame Bovary", "War and Peace", "The Great Gats", "Lolita", "Middlemarch",
                "The Adventures of Huckleberry ", "The Stories of Anton Chekhov", "In Search of Lost Time", "Hamlet" };
        int x = 0;
        Scanner sc = new Scanner(System.in);
        Libary lib = new Libary(books);
        System.out.println(
                "\n**************************************welcome to Libary mangememt software************************");
        do {
            System.out.println("\n1:-show available books in libary\n2:-issue the book\n3:-return the book");
            System.out.println("select the choice ");
            x = sc.nextInt();
            switch (x) {
                case 1:
                    lib.showaAvailableBooks();
                    break;
                case 2:
                    lib.issueBook();
                    break;
                case 3:
                    lib.returnBook();
                    break;
                case 4:
                    System.out.println("hii");
                    String sm = sc.nextLine();
                    String[] newbooks = new String[books.length + 1];
                    for (int i = 0; i < books.length; i++) {
                        newbooks[i] = books[i];
                    }
                    newbooks[newbooks.length - 1] = sm;
                    books = newbooks;
                    break;
                default:
                    System.out.println("invalid choise");
                    break;
            }
            System.out.println("press 1 to continue or press any number to exit");
            x = sc.nextInt();
        } while (x == 1);
    }
}