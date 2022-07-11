import java.io.*;
import java.util.*;

class Main {

    static class Point {
        int x;
        int y;
    }

    static class Rectangle {
        Point tl;
        Point br;
    }

    static class Person {
        int age;
        String name;

        void sayHi(){
            System.out.println(this.name + "[" + this.age + "] says hi.");
        }
    }
    public static void main(String[] args) {
        Person p1 = new Person();
        p1.age = 10;
        p1.name = "A";
        p1.sayHi();

        Person p2 = new Person();
        p2.age = 20;
        p2.name = "B";
        p2.sayHi();

        Person p3 = p2;
        p3.sayHi();

        p2.name = "C";
        p2.sayHi();
        p3.sayHi();

        // heep can also store references
        Rectangle r = new Rectangle(); // instance, ref
        r.tl = new Point(); // instance, reference
        r.tl.x = 2;
        r.tl.y = 6;

        r.br = new Point(); // inst, ref
        r.br.x = 6;
        r.br.y = 1;
    }
}