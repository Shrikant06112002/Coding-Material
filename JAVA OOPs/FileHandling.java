import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileHandling {
    static String NewData;

    public static void main(String[] args) {

        // to creat a new file
        File file = new File("mandar.txt");
        try {
        file.createNewFile();
        } catch (IOException e) {

        e.printStackTrace();
        }

        // to write a new file
        try {
        FileWriter fileWriter = new FileWriter("mandar.txt");
        fileWriter.write("hii this our test file");
        fileWriter.close();
        } catch (IOException e) {

        e.printStackTrace();
        }

        // reafing the test filr
        File myfile = new File("mandar.txt");

        try {
            Scanner sc = new Scanner(myfile);
            while (sc.hasNext()) {

                System.out.println(sc.nextLine());
                NewData = sc.nextLine();
            }
        } catch (FileNotFoundException e) {

            e.printStackTrace();
        }

        File file2 = new File("xyz.txt");

        try {
            file2.createNewFile();
        } catch (IOException e) {

            e.printStackTrace();
        }

        try {
            FileWriter file = new FileWriter("xyz.txt");
            String newData2 = NewData;
            file.write(newData2);
        } catch (Exception e) {
            // TODO: handle exception
        }
        // // delete fiel
        // File file = new File("test.txt");
        // file.delete();

        // System.out.println(myfile.getName());
        // System.out.println(myfile.length());
        // System.out.println(myfile.canWrite());
        // myfile.mkdir();
        // System.out.println(myfile.mkdir());

    }

}
