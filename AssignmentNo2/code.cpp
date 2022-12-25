/*
 Develop an object oriented program in C++ to create a database of student information
system containing the following information: Name, Roll number, Class, division, Date of
Birth, Blood group, Contact address, telephone number, driving license no. and other.
Construct the database with suitable member functions for initializing and destroying the
data viz constructor, default constructor, Copy constructor, destructor, static member
functions, friend class, this pointer, inline code and dynamic memory allocation
operators-new and delete
*/

#include <iostream>
#include <string>
#include <string.h>


class data{
    static int student_count;
    static void count_plus(){
        student_count ++ ;
    }
    private:
        std::string name;
        unsigned short roll_no;
        char division;
        int date_of_birth;
        std::string blood;
        std::string address;
        int contact;
        int license;

    public:
        friend void print(data s);
        data(){
            //count_plus();
        }
        void input(){
            std::cout << "Enter Name > ";
            getline(std::cin, name);
            std::cout << std::endl;

            std::cout << "Enter Roll No > ";
            std::cin >> roll_no;
            std::cout << std::endl;

            std::cout << "Enter division > ";
            std::cin >> division;
            std::cout << std::endl;
            
            std::cout << "Enter  Date Of Birth > ";
            std::cin >> date_of_birth;
            std::cout << std::endl;

            std::cout << "Enter blood group > ";
            getline(std::cin, blood); 
            std::cout << std::endl;

            std::cout << "Enter Address > ";
            getline(std::cin , address);
            std::cout << std::endl;


            std::cout << "Enter contact > ";
            std::cin >> contact;
            std::cout << std::endl;


            std::cout << "Enter license  > ";
            std::cin >> license;
            std::cout << std::endl;
        }


        data( data &obj ){
            this->name = obj.name;
            this->date_of_birth = obj.date_of_birth;
            this->address = obj.address;
            this->blood = obj.blood;
            this->contact = obj.contact;
            this->division = obj.division;
            this->roll_no = obj.roll_no;
            this->license = obj.license;
            //count_plus();
        }

        ~data(){
            std::cout << "DataBase of " << name << " Student is destroyed. :(" << std::endl;
        }
};
void print(data s){
    std::cout << "Name : " << s.name;
    std::cout << "Date Of Birth : " << s.date_of_birth;
    std::cout << "Address : " << s.address;
    std::cout << "Blood Group : " << s.blood;
    std::cout << "Contact No : " << s.contact;
    std::cout << "Division : " << s.division;
    std::cout << "Roll No : " << s.roll_no;
    std::cout << "License : " << s.license;
}

int main(){
    data * Advait = new data();
    Advait->input();
    print(*Advait);
}
