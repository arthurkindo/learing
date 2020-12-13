#include<iostream>
using namespace std;
        // creating class 
class student{
    private:
    int roll_no;
    int age;
    float average;
    string name;
    public:
void details(int r, int a, float avg, string n){
    roll_no = r;
    age = a;
    average = avg;
    name = n;
}
void display_info(){
    cout<<"Roll No : "<<roll_no<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Average : "<<average<<endl;
    cout<<"Age : "<<age<<endl;
}
};

    // defining the function
// void :: student details()
int main(){
    student a1, a2, a3, a4;
    short choise;
    a1.details(4004, 18, 71, "Arthur kindo");
    a2.details(4002, 14, 67, "Sumit Lakra");
    a3.details(4001, 16, 90, "John Sangga");
    a4.details(4007, 19, 76, "Bikash Nag");

            // making it dinamic
    char run = 'y';
    while (run == 'y')
    {
        cout<<"\t\tMain Manu\n"
            <<"\t\t1. display a1\n"
            <<"\t\t2. display a2\n"
            <<"\t\t3. display a3\n"
            <<"\t\t4. display a4\n";
        cout<<"\t\tEnter your choise : ";
        cin>>choise;
        switch(choise){
            case 1: a1.display_info(); break;
            case 2: a2.display_info(); break;
            case 3: a3.display_info(); break;
            case 4: a4.display_info(); break;
            default: cout<<"Please enter a valid choise."<<endl;
        }
        cout<<endl<<"Do you want to run again (y/n) : ";
        cin>>run;
    }
    return 0;
}