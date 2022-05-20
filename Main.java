class Main{
    public static void main(String[] args) {
        // System.out.println("My name is Apurba");
        // create an object
        Human chitti = new Human();
        System.out.println("Wapas aagya constructor se");
        chitti.age = 21;
        chitti.weight = 60;
        chitti.sleep();
    }
}

class Human{
    // properties
    int age;
    int weight;

    // default constructor: There are two types of constructor.

    // no-arg constructor:
    public Human(){
        System.out.println("Inside the constructor - Creating Object");
    }

    // behaviour
    void sleep(){
        System.out.println("Bhaiya is sleeping");
    }

    void eat() {
        System.out.println("Bhaiya is eating");
    }
}