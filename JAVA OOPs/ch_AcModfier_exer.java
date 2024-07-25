public class ch_AcModfier_exer {
    public static void main(String[] args) {
        // Q1)
        // cylinder cyl = new cylinder();
        // cyl.setHeight(12);
        // System.out.println(cyl.getHeight());
        // cyl.setRadius(40);
        // System.out.println(cyl.getRadius());

        // Q2)surface area and volume
        // S.A. (in terms of π) = 2πr (h + r)
        // volume=π · r2 · h
        // cylinder cyl = new cylinder(10, 4); constructor
        // cylinder cyl = new cylinder();

        // cyl.setHeight(8);
        // cyl.setRadius(4);
        // float r = cyl.getRadius();
        // float h = cyl.getHeight();
        // float SA = 2 * 3.14f * r * (h + r);
        // float V = 3.14f * r * r * h;
        // System.out.println("surface area " + cyl.surface());
        // System.out.println("volume " + cyl.volume());

    }

}

class cylinder {
    private int radius, height;

    // Constructor
    public cylinder(int radius, int height) {
        this.radius = radius;
        this.height = height;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public float surface() {
        return 2 * 3.14f * radius * (height + radius);
    }

    public float volume() {
        return 3.14f * radius * radius * height;
    }
}
