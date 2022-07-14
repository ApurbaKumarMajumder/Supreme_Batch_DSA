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

    static class BankAccount {
        int anum;
        int money;
        static int roi;

        void announce(){
            System.out.println(this.anum + ", " + this.money + ", " + this.roi);
        }

        static void decreaseROI(){
            roi--;
            //anum and money can't be used
            // announce();  // not allowed

            // what is allowed
            BankAccount a = new BankAccount();
            a.announce();
        }
    }

    public static void main(String[] args) {
        // Person p1 = new Person();
        // p1.age = 10;
        // p1.name = "A";
        // p1.sayHi();

        // Person p2 = new Person();
        // p2.age = 20;
        // p2.name = "B";
        // p2.sayHi();

        // Person p3 = p2;
        // p3.sayHi();

        // p2.name = "C";
        // p2.sayHi();
        // p3.sayHi();

        // // heep can also store references
        // Rectangle r = new Rectangle(); // instance, ref
        // r.tl = new Point(); // instance, reference
        // r.tl.x = 2;
        // r.tl.y = 6;

        // r.br = new Point(); // inst, ref
        // r.br.x = 6;
        // r.br.y = 1;

        // without a swap function
        // Person temp = p1;
        // p1 = p2;
        // p2 = temp;

        // with swap function
        // swap(p1, p2);

        // p1.sayHi();
        // p2.sayHi();

        BankAccount a1 = new BankAccount();
        a1.anum = 10;
        a1.money = 100;
        a1.roi = 4;  // this is a bad practice
        // static data members should be modified using class and not object
        // because static data member belong to class & not the object individually

        a1.announce();

        BankAccount a2 = new BankAccount();
        a2.anum = 11;
        a2.money = 110;
        a2.roi = 5;

        a2.announce();
        a1.announce();
    }

    public static void swap(Person a, Person b){
        Person temp = a;
        a = b;
        b = temp;
        // the swap function because the memory was interchanged in the function only and was not passed on to the actual object.
    }
}