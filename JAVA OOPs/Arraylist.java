
import java.io.*;
import java.util.*;

public class Arraylist {

    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<Integer>();

        l1.add(6);
        l1.add(5);
        for (int i = 0; i < l1.size(); i++) {
            System.out.println(l1.get(i));

        }
    }

}
