#include<iostream>
#include<string.h>

using namespace std;

class Student {
    int maximum;
    char subject[30];

    public:
    void get_data()
    {
        int size,i;

        cout<<"\nEnter no of Subjects: ";
        cin>>size;

        char names[size][30];

        cout <<"\nEnter "<<size<<" Subjects names...\n";

        for(i=1;i<=size;i++)
        {
            cout<<"\n"<<i<<". ";
            cin>>names[i-1];
        }

        int array[size];

        for(i=0;i<size;i++)
        {
            cout<<"\nEnter marks for "<<names[i]<<": ";
            cin>>array[i];
        }

        maximum = array[0];

        for(i=0;i<size;i++)
        {
            if(array[i] > maximum)
            {
                maximum = array[i];
                strcpy(subject,names[i]);
            }
        }
    }
    void display()     {
        cout<<"\nMaximum Marks: ";
        cout<<"\nYou Had Scored "<<maximum<<" marks in "<<subject;
    }
};

int main(void) {
    Student s1;

    s1.get_data();
    s1.display();
    return 0;
}