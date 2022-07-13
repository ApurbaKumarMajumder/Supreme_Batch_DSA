# What is a Class?

Class is a blueprint/template/representation or user-defined data type for the objects.

# What is an Object?

An Object is a real-world or software entry which has attributes(instance fields) and behaviours(instance methods).
Objects are created from a class only.

Objects are Instantiated when class is loaded into memory. Objects are also classed as <strong>Instances</strong>.

# What is a Reference?

Reference holds the address of an object or instance. Whenever we want to call instance methods, we use this reference which holds the address of the object.

# Differences b/w Instance Variable and Reference Variables?

![image](https://drive.google.com/file/d/1DPC0AHlihSxtW2yJVSrv9edjnmevNrn6/view?usp=sharing)

# What are static functions?

Such functions which donot require object for their invocation (are invoked directly via class name).

These are Utility stateless functions. ex. Math.min, Math.max, Arrays.sort, Arrays.fill

Stateless -> Nothing is saved between two functions calls, each call is independent and takes all input as parameters.

## Implications ?

* this keyword cannot be used in static functions. Why?
    
    because can be called by class name, so in that case "this" won't know which instance to point to.

* non-static data members can't be used in static functions. Why?

    because it can be called by classname and in that case we don't if any object exists, and if they do, we don't know which objects non-static data members to use.

* non-static fns can't be used in static fns. Why?

    - can be used, by making an object inside the static fn and calling the non-static fn on it.
    - can't be called directly

## miscellaneous ?

* Can non-static fn, use static data member?
* Can non-static fn, use static fn?

    Yes, because we have extra information available (not less)