import java.io.*;
import java.util.*;

public class Main {

    public static class P {
        int d = 1;
        int d1 = 10;

        void fun() {
            System.out.println("P fun");
        }

        void fun1() {
            System.out.println("P fun1");
        }
    }

    public static class C extends P {
        int d = 2;
        int d2 = 20;

        void fun() {
            System.out.println("C fun");
        }

        void fun2() {
            System.out.println("C fun2");
        }
    }
    public static void main(String[] args) {
        P obj = new P();
        System.out.println(obj.d);
        System.out.println(obj.d1);
        obj.fun();
        obj.fun1();
    }
}