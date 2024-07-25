public class reverse {
    public static void main(String[] args) {
        String str = "Geeks";

        // conversion from String object to StringBuffer
        StringBuffer sbr = new StringBuffer(str);
        // To reverse the string
        sbr.reverse();
        System.out.println(sbr);
        System.out.println(str);
        System.out.println(str.compareTo(sbr));
        if(str.equals(sbr))

        String input = "GeeksForGeeks";
  
        // convert String to character array
        // by using toCharArray
        char[] try1 = input.toCharArray();
  
        for (int i = try1.length - 1; i >= 0; i--)
            System.out.print(try1[i]);

            Scanner sc=new Scanner(System.in);
            String A=sc.next();
            String R = new StringBuilder(A).reverse().toString();
            
            if(A.equals(R)) System.out.println("Yes");
            else System.out.println("No");
    }
}
