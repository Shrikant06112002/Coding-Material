import java.lang.reflect.Array;
import java.util.*;

public class Collection_arraylist {
    /**
     * @param args
     */
    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<>();
        l1.add(12);
        l1.add(13);
        l1.add(14);
        l1.add(15);
        l1.add(16);
        l1.add(17);
        l1.add(0, 1);
        l1.add(0, 2);
        l1.set(11, null);

        List<String> l2 = new ArrayList<String>();
        l2.add("a");
        l2.add(0, "b");
        l2.add(0, "c");
        l2.add(0, "d");
        System.out.println(l2);

        // ArrayList<Integer> l2 = new ArrayList<>();
        // l2.add(5);
        // l2.add(6);

        // l1.addAll(0, l2);// by default append

        // System.out.println(l1.contains(27));
        // System.out.println(l1.indexOf(1));
        // System.out.println(l1.indexOf(85));
        // System.out.println(l1.lastIndexOf(6));
        // // System.out.println(l1.size());
        // System.out.println();
        // for (int i = 0; i < l1.size(); i++) {
        // System.out.println(l1.get(i));
        // }

        // for (int i : l1) {
        // System.out.println(l1.get(i));
        // }

        // System.out.println("start l3");

        // ArrayList<String> l3 = new ArrayList<String>();
        // // l3.set(10, 50); default size is 10 but when add th incresing size
        // // automaticaaly
        // l3.add(0, "a");
        // l3.add(0, "b");
        // l3.add(0, "c");
        // l3.add("d");
        // l3.set(0, "dsfj");

        // System.out.println(l3.size());
        // for (int i = 0; i < l3.size(); i++) {
        //     System.out.println(l3.get(i));
        // }

        // List m = new ArrayList();

        // List<String> p = new ArrayList<String>();
        // p.add("a");
        // p.add("b");

        // List<Integer> q = new LinkedList<Integer>();
        // q.add(1);
        // q.add(2);

        // List<obj> q = new ArrayList<obj>();
        // q.add(new obj());

        ArrayList<Integer> s1 = new ArrayList<Integer>();
        s1.add(1);
        s1.add(2);

        // Iterator
        for (Iterator<Integer> i = s1.iterator(); i.hasNext();)
            System.out.println(i.next());

        // foreach
        for (int i : s1) {
        System.out.println(s1.get(i));
        }

        // hashset
        int[] b = new int[10];
        int[] a = { 10, 20, 3 };
        HashSet<Integer> s2 = new HashSet<Integer>();
        s2.add(12);
        s2.add(8);
        s2.add(2);
        s2.add(23);

        // itertor
        System.out.println(s2);

        Iterator<Integer> iterate = s2.iterator();

        while (iterate.hasNext()) {
            int i = iterate.next();
            if (i < 10) {
                iterate.remove();
            }
        }
        System.out.println(s2);

        // HashSet
        HashSet<String> s3 = new HashSet<String>();
        s3.add("a");

        // Hasmap
        HashMap<String, Integer> s4 = new HashMap<String, Integer>();
        s4.put("a", 1);
        s4.put("b", 2);
        s4.put("c", 1);
        s4.put("d", 1);
        System.out.println(s4);
        s4.put("a", 10);
        System.out.println(s4);
        s4.putIfAbsent("e", 5);
        System.out.println(s4);
        System.out.println(s4.containsKey("a"));

        s4.keySet();
        System.out.println(s4.keySet());
        s4.get("a");
        System.out.println(s4.get("a"));
        System.out.println(s4.hashCode());
        // Iterator

        // Vector<E> v = new Vector<>(E);

    }
}
