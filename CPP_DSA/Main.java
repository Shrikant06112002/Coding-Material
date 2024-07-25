import java.util.*;

// Read only region start
class UserMainCode {
    public int rearrangeBits(int input1) {
        // Read only region end
        int countSetBits = countSetBits(input1);
        int result = 0;
        for (int i = 0; i < countSetBits; i++) {
            result |= (1 << i);
        }
        return result;
    }

    // Function to count the number of set bits in a number
    private int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += (num & 1);
            num >>= 1;
        }
        return count;
    }
}
public class Main {
    public static void main(String[] args) {
        UserMainCode solution = new UserMainCode();
        int input1 = 100;
        System.out.println(solution.rearrangeBits(input1)); // Output should be 7
    }
}
