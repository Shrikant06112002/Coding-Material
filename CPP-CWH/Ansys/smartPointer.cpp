#include <iostream>
#include <memory>  // For smart pointers (unique_ptr, shared_ptr, weak_ptr)

using namespace std;

// Class to demonstrate smart pointer usage
class MyClass {
public:
    int data;

    MyClass(int val) : data(val) {
        cout << "MyClass constructor called. Data: " << data << endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called. Data: " << data << endl;
    }

    void display() {
        cout << "Data in MyClass: " << data << endl;
    }
};

// Function demonstrating unique_ptr
void uniquePointerExample() {
    // Creating a unique_ptr that takes ownership of MyClass object
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>(10);

    cout << "Unique Pointer Example:" << endl;
    ptr1->display();  // Accessing members of MyClass through unique_ptr

    // After ptr1 goes out of scope, MyClass object will be automatically destroyed.
    cout << endl;
}

// Function demonstrating shared_ptr
void sharedPointerExample() {
    // Creating a shared_ptr that shares ownership of MyClass object
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>(20);
    {
        shared_ptr<MyClass> ptr2 = ptr1;  // Shared ownership, ptr2 also owns MyClass
        cout << "Shared Pointer Example:" << endl;
        ptr1->display();  // Accessing MyClass through shared_ptr
        ptr2->display();  // ptr2 also has access

        cout << "Reference count (ptr1): " << ptr1.use_count() << endl;
        cout << "Reference count (ptr2): " << ptr2.use_count() << endl;
    }
    // After ptr2 goes out of scope, ptr1 still holds the object, and it will be destroyed when ptr1 goes out of scope.

    cout << "After ptr2 goes out of scope:" << endl;
    cout << "Reference count (ptr1): " << ptr1.use_count() << endl;
    ptr1->display();
    cout << endl;
}

// Function demonstrating weak_ptr
void weakPointerExample() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>(30);

    // Creating a weak_ptr from shared_ptr (does not affect the reference count)
    weak_ptr<MyClass> weakPtr = ptr1;

    cout << "Weak Pointer Example:" << endl;
    cout << "Reference count before expiration: " << ptr1.use_count() << endl;

    if (auto sharedPtr = weakPtr.lock()) {  // Convert weak_ptr to shared_ptr
        sharedPtr->display();  // Accessing MyClass through weak_ptr
    }

    ptr1.reset();  // Reset the shared_ptr, reducing the reference count to 0.

    cout << "Reference count after ptr1 reset: " << weakPtr.use_count() << endl;

    if (auto sharedPtr = weakPtr.lock()) {
        sharedPtr->display();
    } else {
        cout << "The object is no longer available, weak_ptr is expired!" << endl;
    }
    cout << endl;
}

int main() {
    // Example using unique_ptr
    uniquePointerExample();

    // Example using shared_ptr
    sharedPointerExample();

    // Example using weak_ptr
    weakPointerExample();

    return 0;
}
