public class Main {

    public static void main(String[] args) {
        //create an object
    //    Human chitti = new Human();
    //    System.out.println("Wapas Aagya constructor se");
    //    chitti.age = 23;
    //    chitti.weight = 32;
    //    chitti.sleep();

    //    Human obj = new Human(12, 89);
    //    System.out.println("age is " + obj.age);

    //     System.out.println("Number of Object Created " + Human.count );
    //    Male alpha = new Male();
    //    alpha.sleep();

    //    Scorpio fav = new Scorpio() ;
    //    fav.intro();

    //     Dog goldy = new Dog();
    //     goldy.speak();
    }
}

class Male extends Human{

}


class Human {
    //data member
    int age;
    int weight;
    //number of object created
    //static int count = 0;

    //default constructor

    //2 types:
    // no-arg constructor
    public Human() {
        //count++;
        age = 0;
        System.out.println("Inside the Constructor - Creating Object");
    }
    //parameterized constructor
    public Human(int age, int weight) {
        this();
        //count++;
        this.age = age;
        this.weight = weight;
    }

    //constrcutor overloading
    public Human(int a) {
        //count++;
        System.out.println("");
    }

    //behaviour
    void sleep() {
        System.out.println("Bhaiya is Sleeping");
    }

    void eat() {
        System.out.println("Bhaiya is Eating");
    }

    static void update() {
        //count++;
    }

}