#include <iostream>

using namespace std;




int main()
{
    setlocale(LC_ALL, "ru");
    struct Human {
        string name;
        int age;
        string prof;
    };

    Human my_struct;
    my_struct.age = 50;
    cout << my_struct.age << endl;




    
  
    return 0;

}