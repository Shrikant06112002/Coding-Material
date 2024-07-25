import java.util.Random;
import java.util.Scanner;

public class GuessNum {
    public static void main(String[] args) {
        // Random rm = new Random();
        boolean b = false;

        // Game gm = new Game();
        while (!b) {
            Game gm = new Game();
            gm.takeUserInput();
            b = gm.isCorrect();

            System.out.println(b);
        }
    }

}

class Game {
    public int num;
    int NoOfGuess = 0;
    public int Unum;

    // public int getNoOfGuess() {
    // return NoOfGuess;
    // }

    // public void setNoOfGuess(int noOfGuess) {
    // NoOfGuess = noOfGuess;
    // }

    Game() {
        Random rn = new Random();
        num = rn.nextInt(100);
    }

    void takeUserInput() {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number");
        Unum = sc.nextInt();
        sc.close();
        // return Unum;

    }

    boolean isCorrect() {
        NoOfGuess++;
        if (Unum == num) {
            System.out.println("congrualtion !! you win in :" + NoOfGuess + " attempt");
            return true;
        } else if (Unum < num) {
            System.out.println("Too low.........");
        } else if (Unum > num) {
            System.out.println("Too high.........");
        }
        return false;
    }

}
