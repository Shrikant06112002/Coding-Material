import java.util.Random;
import java.util.Scanner;

public class rock_paper {
    public static void main(String[] args) {
        // int rock,paper,sessior;
        Scanner sc = new Scanner(System.in);
        Random rn = new Random();
        while (true) {
            System.out.println("select the one:\n 0 for rock \n 1 for paper \n 2 for sessior");
            int UserChoice = sc.nextInt();
            int ComputerChoice = rn.nextInt(3);

            if (UserChoice == ComputerChoice) {
                System.out.println("match draw becz you enter same");
            } else if (UserChoice == 0 && ComputerChoice == 1 || UserChoice == 0 && ComputerChoice == 2
                    || UserChoice == 2 && ComputerChoice == 1) {
                System.out.println("congrualtion , you won the match");
                // } else if (UserChoice == 0 && ComputerChoice == 2) {
                // System.out.println("congrualtion , you won the match");
                // } else if (UserChoice == 2 && ComputerChoice == 1) {
                // System.out.println("congrualtion , you won the match");
            } else if (UserChoice == 1 && ComputerChoice == 2 || UserChoice == 2 && ComputerChoice == 0
                    || UserChoice == 1 && ComputerChoice == 0) {
                System.out.println("uffff , you loss the match");
                // } else if (UserChoice == 2 && ComputerChoice == 0) {
                // System.out.println("ufff , you loss the match");
                // } else if (UserChoice == 1 && ComputerChoice == 0) {
                // System.out.println("ufff , you loss the match");
                // }
            } else {
                System.out.println("you enter wrong choice");
            }

        }

    }
}
