
#include<iostream>
#include<bits/stdc++.h>

using  namespace std;

class Employee{

    public:
       string Name;
       int Age;
       string Department;

       Employee(string name, string company, int age){
          Name = name;
          Department= company;
          Age =age;
       }
       void printInfo(){
           cout<<"Name :"<<Name<<endl;
           cout<<"Department :"<<Department<<endl;
           cout<<"Age: "<<Age<<endl;
       }


};


int main(void){
    cout<<"Hello"<<endl;
//     Employee emp; 
//     cout<<"Enter your detail:"<<endl;
//     cout<<"Enter the name:";
//     //cin>>emp.name;
//     getline(cin,emp.Name);
//     cout<<" Enter the department Name:";
//     //cin>>emp.department;
//     getline(cin,emp.Department);
//     cout<<" Enter the your age:";
//     cin>>emp.Age;
//     //Md emp.name= "Md Irfan";
//    // emp.department="Computer Engineering";
//     //emp.age=26;
//     emp.printInfo();


     Employee emp =Employee("Irfan", "Amazon",26);
     emp.printInfo();
    return 0;
}