public class Circle {
    private double radius = 1.0;
    private String color = "red";

    public Circle() {

    }

    public Circle(double radius) {
        this.radius = radius;
    }

    public Circle(double radius, String color) {
        this.radius = radius;
        this.color = color;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    @Override
    public String toString() {
        // TODO Auto-generated method stub
        return "Circle[radius = " + radius + ", color = " + color + "]";
    }
}

class Cylinder {
    private double height = 1.0;
    private Circle circle;

    public Cylinder() {
    }

    public Cylinder(double radius) {
        circle.setRadius(radius);
    }

    public Cylinder(double radius, double height) {
        this.height = height;
        circle.setRadius(radius);
    }

    public Cylinder(double radius, double height, String color) {
        this.height = height;
        circle.setRadius(radius);
        circle.setColor(color);
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getVolume() {
        return height * circle.getRadius() * circle.getRadius() * Math.PI;
    }

}
