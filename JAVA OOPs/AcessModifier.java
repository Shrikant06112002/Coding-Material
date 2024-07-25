public class AcessModifier {
    public static void main(String[] args) {
        InnerAcessModifier in = new InnerAcessModifier();
        in.setId(100);
        in.setName("shrikant");
        System.out.println(in.getId() + in.getName());
        // in.name="shrikant"; not valid because public keyword ie. privte stringg name

    }
}

class InnerAcessModifier {
    private int id;
    private String name;

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
