#include <iostream>

struct Student{
    std::string name;
    std::string major;
    int studentID;

};

void buildStudent(Student &someStudent){

    std::cout << "Enter Name: " << std::endl;
    std::getline (std::cin, someStudent.name);

    std::cout << "Enter Major: " << std::endl;
    std::cin >> someStudent.major;

    std::cout << "Enter ID: " << std::endl;
    std::cin >> someStudent.studentID;

}

void changeMajor(Student &someStudent){

    std::cout << "Enter new major ";
    std::cin >> someStudent.major;
    
}

void printStudent(Student &someStudent){
    std::cout << "Students name is " << someStudent.name << std::endl;
    std::cout << "Students major is " << someStudent.major << std::endl;
    std::cout << "Students ID is " << someStudent.studentID << std::endl;
    
}

int main(){

    Student s1, s2, s3;
    buildStudent(s1);
    printStudent(s1);
    changeMajor(s1);
    printStudent(s1);



    return 0;
}