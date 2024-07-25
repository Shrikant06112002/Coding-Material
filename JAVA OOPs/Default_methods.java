interface Camera {
    void takesnap();

    void recordvideo();
    

}

interface wifi {
    String[] getNetworks();

    void connecttonetwork(String network);
}

class Mysellphone {

    void callnumber(int number) {
        System.out.println("calling..." + number);
    }

    void pickcall() {
        System.out.println("connecting..");
    }
}

class Smartphone extends Mysellphone implements wifi, Camera {
    public void takesnap() {
        System.out.println("taking snap");
    }

    public void recordvideo() {
        System.out.println("taking video");
    }

    public String[] getNetworks() {
        System.out.println("getting list");
        String[] networklist = { "shri", "om", "sahil" };
        return networklist;
    }

    public void connecttonetwork(String network) {
        System.out.println("connecting to.." + network);
    }
    
}

public class Default_methods {
    public static void main(String[] args) {
        Smartphone sm = new Smartphone();
        String[] ar = sm.getNetworks();
        for (String string : ar) {
            System.out.println(string);
        }
    }

}
