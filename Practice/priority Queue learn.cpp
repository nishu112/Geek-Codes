#include <queue>
#include <iostream>
using namespace std;

class Person {
public:
    Person(int age) : age(age) {}
    int age;
};

bool operator<(const Person& a, const Person& b) {
    return a.age < b.age;
}

int main() {
    priority_queue<Person> Q;
    for (int i : {1, 10, 2, 9, 3, 8, 4, 7, 5, 6})
        Q.push(Person(i));
    while (!Q.empty()) {
        Person p = Q.top();
        Q.pop();
        cout << p.age << " ";
    }
    return 0;
}
