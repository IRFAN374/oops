

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Encapsullation
// Access and modify private value using getter and setter

class AbstractEmployee{

    virtual void askPromotion()=0;

};

class Employee:AbstractEmployee{
   private:
      string Name;
      int Age;
      string Department;

    public:
      // getting Info
      void getInfo(){
          cout<<"Name is:"<<Name<<endl;
          cout<<"Department Name is: "<<Department<<endl;
          cout<<"Age is: "<<Age<<endl;
      }   
      // Parametrized Constructor
      Employee(string name, string department, int age){
          Name = name;
          Department=department;
          Age= age;
      }

      void setName(string name){
           Name = name;
      }
      string getName(){
          return Name;
      }

      void setCompany(string department){
          Department=department;
      }

      string getCompany(){
          return Department;
      }

      void setAge(int age){
          if(age>=18){
             Age = age;
          }
          
      } 
      int getAge(){
          return Age;
      }
     
     void askPromotion(){
         if(Age>30){
             cout<<Name<<" got promoted:"<<endl;
         }else{
             cout<<Name<<" :Sorry, No promotion for you"<<endl;
         }
     }

};


int main(void){

    Employee emp = Employee("Asif","Electrical",26);
    // emp.getInfo();
    // emp.setName("Md Irfan");
    // emp.setCompany("Amazon");
    // emp.setAge(25);

    // cout<<"Name is:"<<emp.getName()<<endl;
    // cout<<"Department is:"<<emp.getCompany()<<endl;
    // cout<<"Age is:"<<emp.getAge()<<endl;
    // emp.getInfo();

    Employee emp1= Employee("Irfan","Computer",32);
    emp.askPromotion();
    emp1.askPromotion();


    return 0;
}