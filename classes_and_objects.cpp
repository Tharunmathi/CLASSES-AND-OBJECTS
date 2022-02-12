# include<iostream>
using namespace std;
/*class Book{
    public:
    string title;
    string author;
    int pages;
};
int main(){
    Book b1;
    b1.title = "HARRY POTTER";
    b1.author = "CHANDAN ";
    b1.pages = 500;
    Book b2;
    b2.title = "PIRATES OF THE CARRIBIAN";
    b2.author = "THARUN ";
    b2.pages = 1000;
    cout << b1.title <<endl;
    cout << b1.author <<endl;
    cout << b1.pages <<endl;
    cout << b2.title <<endl;
    cout << b2.author <<endl;
    cout << b2.pages <<endl;
    return 0; 
}*/
/*class Student{
    public:
    int id;
    string name;
};
int main(){
    Student s1,s2;
    s1.id = 86;
    s1.name = "Tharun";
    cout <<s1.id <<endl;
    cout << s1.name <<endl;
    s2.id = 91;
    s2.name = "pavan";
    cout <<s2.id <<endl;
    cout << s2.name <<endl;
    return 0;
}*/
// Initialize and Display data through method
/* class Student{
    public:
    int id;
    string name;
    void insert(int i,string n){
        id = i;
        name = n;
    }
    void display(){
        cout << id <<endl;
        cout << name <<endl;

    }
};
int main(){
    Student s1;
    Student s2;
    s1.insert(86,"Tharun");
    s2.insert(91,"pavan");
    s1.display();
    s2.display();
    return 0;
}*/
/*class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}*/
class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}
