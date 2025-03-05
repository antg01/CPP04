# CPP04
# README: C++ Exercises - Polymorphism, Inheritance, and Memory Management

This README provides an explanation of the theory behind the three C++ exercises related to polymorphism, inheritance, abstract classes, and memory management. Each exercise will enhance your understanding of object-oriented programming concepts such as class inheritance, constructors/destructors, deep copying, and virtual functions.

---

## **Exercise 00: Polymorphisme**

### **Concepts Covered**:
- **Polymorphism**: This exercise teaches you the basics of polymorphism, which allows objects of different derived classes (e.g., `Dog` and `Cat`) to be treated as objects of a base class (`Animal`), while still maintaining their specific behaviors (i.e., `makeSound()`).
- **Inheritance**: You will learn how to inherit from a base class (`Animal`) to create derived classes (`Dog`, `Cat`), where the derived classes inherit the base class's attributes and methods.
- **Virtual Functions**: The `makeSound()` function will be virtual, allowing the derived classes to override this method and provide their specific implementation.
- **Constructors and Destructors**: Each class will have its own constructor and destructor, and you will print messages when they are called, helping to understand object lifecycle management.
- **Abstract Base Class**: You will also learn how to design a class that should not be instantiated directly, acting as a blueprint for derived classes.

### **Explanation**:
In this exercise, you will start by creating a base class `Animal` with a protected `type` attribute. Then, you will create two derived classes `Dog` and `Cat`, each initializing their type and overriding the `makeSound()` method to provide their own sound. Polymorphism will be demonstrated when objects of `Dog` and `Cat` are treated as objects of the base class `Animal`, but still make their own specific sounds.

To further challenge yourself, you will implement a `WrongCat` class derived from `WrongAnimal`, where the `WrongCat` will not be able to override the `makeSound()` method, and it will behave incorrectly when polymorphism is used.

---

## **Exercise 01: Je ne veux pas brûler le monde**

### **Concepts Covered**:
- **Deep Copying**: This exercise focuses on ensuring that when objects are copied (e.g., `Dog` and `Cat`), their internal resources (such as the `Brain` object) are copied deeply, rather than just copying the pointer (shallow copy).
- **Memory Management**: Proper memory management with `new` and `delete` is crucial in this exercise. You will dynamically allocate memory for the `Brain` object in `Dog` and `Cat`, and delete them correctly in the destructors to avoid memory leaks.
- **Destructor Chaining**: The destructors of `Dog` and `Cat` must ensure that the `Brain` object is properly deleted, following the correct order of destruction.
- **Array of Objects**: You will create an array of `Animal` pointers, half of which are `Dog` objects and half `Cat` objects. You will delete the objects using the base class pointer (`Animal*`) to ensure proper destructor calls.

### **Explanation**:
In this exercise, you will extend the classes from Exercise 00 by adding a `Brain` class. Each `Dog` and `Cat` will have a `Brain*` pointer, which they will initialize to a new `Brain` object. The `Brain` class contains a `std::string` array to store ideas. When deleting `Dog` and `Cat`, the `Brain` object will also need to be deleted to avoid memory leaks. Additionally, the program will demonstrate deep copying by ensuring that when a `Dog` or `Cat` is copied, the `Brain` is copied deeply, not just the pointer.

---

## **Exercise 02: Classe Abstraite**

### **Concepts Covered**:
- **Abstract Classes**: The `Animal` class will be modified to become an abstract class, which cannot be instantiated directly. This will be achieved by declaring at least one pure virtual function (e.g., `makeSound()`).
- **Pure Virtual Functions**: A pure virtual function is declared by adding `= 0` at the end of the function declaration. This marks the function as abstract, meaning that any class derived from `Animal` must implement this function.
- **Polymorphism in Abstract Classes**: This exercise will further solidify your understanding of polymorphism, but with the restriction that you cannot instantiate the `Animal` class directly.
- **Preventing Instantiation**: By making `Animal` an abstract class, you are forcing other classes like `Dog` and `Cat` to provide implementations for abstract methods, making sure the `Animal` class only serves as a blueprint.

### **Explanation**:
In this exercise, you will modify the `Animal` class to make it abstract. This is done by declaring the `makeSound()` function as a pure virtual function, meaning `Animal` cannot be instantiated. You will still be able to create `Dog` and `Cat` objects, as they will provide their own implementations of the `makeSound()` method. This exercise enforces the idea that abstract classes are meant to be inherited from, and cannot be used to create objects directly.

---

## **Conclusion**

These exercises focus on key object-oriented programming concepts such as inheritance, polymorphism, abstract classes, and memory management. You will learn how to:
- Use inheritance to create base and derived classes.
- Implement polymorphism with virtual functions and pure virtual functions.
- Manage memory properly with dynamic allocation (`new`) and deallocation (`delete`), especially when dealing with deep copies of objects.
- Prevent instantiation of abstract base classes, making them usable only as blueprints for other classes.

By the end of these exercises, you will have a solid understanding of how to design flexible and reusable code with inheritance and polymorphism while maintaining good memory management practices.
