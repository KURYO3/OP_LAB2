#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {} //: x(val) вказує, що член x класу MyClass повинен бути ініціалізований значенням val в момент створення об’єкта.
                                 //Це більш ефективно, ніж присвоєння значення x в тілі конструктора, оскільки воно виконується безпосередньо під час створення об’єкта, а не після його створення.
};

MyClass createObject() {
    MyClass obj(10); //x буде ініціалізовано значенням 10
    return obj;
}

int main() {
    MyClass& ref = createObject();
    cout << ref.x << endl; //Помилка
    return 0;
}
//??????????????