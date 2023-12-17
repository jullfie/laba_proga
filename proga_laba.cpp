#include <iostream>
#include <string>
using namespace std;

//Класс Vehicle является базовым классом для всех транспортных средств. Он имеет защищенное поле brand, которое представляет марку транспортного ср-ва. 
//Класс имеет конструкторы, геттеры и сеттеры для марки
class Vehicle {
protected:
    string brand;
public:
    Vehicle() {
        brand = "Unknown";
    }

    Vehicle(string b) {
        brand = b;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string b) {
        brand = b;
    }
};

//Класс Company представляет компанию, в которой работает сотрудник. Он имеет приватное поле companyName, представляющее название компании.
// Класс также имеет конструкторы, геттеры и сеттеры для названия компании
class Company {
private:
    string companyName;
public:
    Company() {
        companyName = "Unknown";
    }

    Company(string name) {
        companyName = name;
    }

    string getCompanyName() {
        return companyName;
    }

    void setCompanyName(string name) {
        companyName = name;
    }
};

//Класс Employee представляет сотрудника. Он имеет приватные поля name и age, представляющие имя и возраст сотрудника соответственно. 
//Класс также имеет конструкторы, геттеры и сеттеры для имени и возраста
class Employee {
private:
    string name;
    int age;
public:
    Employee() {
        name = "Unknown";
        age = 0;
    }

    Employee(string n, int a) {
        name = n;
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }
};

//Класс Truck наследуется от класса Vehicle и представляет грузовик. Он имеет приватное поле maxLoad, представляющее максимальную грузоподъемность грузовика.
// Класс имеет несколько конструкторов, а также методы для установки и получения максимальной грузоподъемности и вывода информации о грузовике
class Truck : public Vehicle {
private:
    int maxLoad;
public:
    Truck() : Vehicle() {
        maxLoad = 0;
    }

    Truck(string b, int load) : Vehicle(b) {
        maxLoad = load;
    }

    Truck(string b) : Vehicle(b) {
        maxLoad = 0;
    }

    void setMaxLoad(int load) {
        maxLoad = load;
    }

    int getMaxLoad() {
        return maxLoad;
    }

    void printDetails() {
        cout << "Truck Brand: " << getBrand() << endl;
        cout << "Max Load: " << maxLoad << " tons" << endl;
    }
};

//Класс Car наследуется от класса Vehicle и представляет автомобиль. Он имеет приватное поле maxSpeed, представляющее максимальную скорость автомобиля.
// Класс имеет несколько конструкторов, а также методы для установки и получения максимальной скорости и вывода информации об автомобиле
class Car : public Vehicle {
private:
    int maxSpeed;
public:
    Car() : Vehicle() {
        maxSpeed = 0;
    }

    Car(string b, int speed) : Vehicle(b) {
        maxSpeed = speed;
    }

    Car(int speed) : Vehicle() {
        maxSpeed = speed;
    }

    void setMaxSpeed(int speed) {
        maxSpeed = speed;
    }

    int getMaxSpeed() {
        return maxSpeed;
    }

    void printDetails() {
        cout << "Car Brand: " << getBrand() << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
    }
};

//В функции main создаются объекты классов Truck и Car с определенными значениями марки,грузоподъемности и максимальной скорости. 
//Затем вызывается метод printDetails, который выводит информацию о каждом созданном объекте
int main() {                            
    Truck truck1("Volvo", 10);
    truck1.printDetails();

    Car car1("Toyota", 200);
    car1.printDetails();

    return 0;
}