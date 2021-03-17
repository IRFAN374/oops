

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


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



class Developer:public Employee{
    
    public:
       string favProgLang;
       Developer(string name, string department, int age,string favLanguange):Employee(name,department,age){
           favProgLang=favLanguange;

       }
       

       void FixBug(){
           cout<<getName()<<"  :Fixed Bug: "<<favProgLang<<endl;
       }

};

class Teacher:public  Employee{
    public:
       string subject;
       void prepareLesson(){
           cout<<getName()<<" is preparing "<<subject<<"  lesson"<<endl; 
       }
    
       
       Teacher(string name, string department, int age, string courseName):Employee( name,  department,  age){

           subject= courseName;

       }

    //    void setName(string Sname){
    //         subject = Sname;
    //    }

    //    string getName(){
    //        return subject;
    //    }

    //    void getDetails(){
    //        prepareLesson();
    //    }

};

int main(void){

    Employee emp1 = Employee("Md Irfan","Computer Engineering",26);
    Employee emp2=  Employee("Md Asif","Electrical Engineering",32);
    Developer dev= Developer("Kashan","Electronics",29,"VLSI");
    // dev.getInfo();
    // dev.FixBug();
    // dev.askPromotion();

    // for Teacher class

    Teacher teach=Teacher("Waqar","Student",31,"Geography");
    teach.prepareLesson();
    teach.askPromotion();

    return 0;
}