public class Constructor {
    public static void main(String[] args) {
        InnerConstructor in = new InnerConstructor("shrikanttttttt");
        // in.setId(100);
        // in.setName("shrikant");
        System.out.println(in.getId() + in.getName());
    }
}

class InnerConstructor {
    private int id;
    private String name;

    public InnerConstructor(String myName) {
        id = 45;                     // not need the seprate the set value
        name = myName;
    }

    public String getName() { // getter
        return name;
    }

    public void setName(String n) { // setter
        name = n;
    }

    public int getId() {
        return id;
    }

    public void setId(int i) {
        id = i;
    }
}