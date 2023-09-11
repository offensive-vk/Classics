#include <iostream>
#include <conio.h>
using namespace std;

struct Person
{
    string name;
    int age;
    char gender;
};

// Function to display the person's information.
void displayPerson(Person person)
{
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Gender: " << person.gender << endl;
}

int main()
{
    // Creating an instance of the Person struct.
    Person person1;
    person1.name = "John Doe";
    person1.age = 30;
    person1.gender = 'M';

    // Displaying the person's information.
    displayPerson(person1);

    // Creating an array of Person structs.
    Person personList[3];

    // Initializing the person array.
    personList[0] = {"Jane Doe", 25, 'F'};
    personList[1] = {"Peter Jones", 40, 'M'};
    personList[2] = {"Sarah Miller", 20, 'F'};

    // Displaying the information of all persons in the array.
    for (int i = 0; i < 3; i++)
    {
        displayPerson(personList[i]);
    }

    void modifyPerson(Person person)
    {
        person.age += 1;
    }
    modifyPerson(person1);
    cout << "Person's age after modification: " << person1.age << endl;

    return 0;
}
