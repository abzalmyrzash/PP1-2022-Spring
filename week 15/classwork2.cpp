#include <iostream>
using namespace std;

// task 4: create a struct Person with first name, last name, age, gender, country - Fyrat
struct Person{
// public by default
    string first;
  string last;
  int age;
  string gender;
  string country;

    // task 7: create function inside of struct - Nurlan
bool male(){
  // if(gender!="male") return false;
  // else return true;
    return (gender=="male");
};

class PersonC{
// private by default
public:
    string name;
    int age;
};

// task 6: function to check if a person is over 18 - Bakytzhan
bool overage(Person p1){
  // if(p1.age>18){
  //   return true;
  // }
  // else {
  //   return false;
  // }
// task 8: shorten function - Chingiz
    return (p1.age >18);
}
int main(){
    // task 5: create an object of type Person, assign values to all fields - Ernur Sultan
  Person p1;
  p1.first="Ernur";
  p1.last="Sultan";
  p1.age=18;
  p1.gender="male";
  p1.country="Kazakhstan";

    cout << overage(p1) << endl;
    cout << p1.male() << endl;

    PersonC p2;
    p2.name = "Abzal";
    return 0;
}