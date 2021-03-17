// Class Creation and concept


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

namespace namespace1{
    int age;
    string name;
}

class Employee{
    public:
     string Emp_name;
     string Emp_dep;
     int age;
     
};

int main(void){
    cout<<"Hello world"<<endl;
    
     cout<<namespace1::age<<endl;
     cout<<namespace1::name<<endl;
     vector<int>arr={1,2,3,4,6};
     sort(arr.begin(),arr.end(),greater<>());
     for(int i=0;i<arr.size();i++){
         cout<<arr[i]<<endl;
     }
     cout<<endl;


     
    return 0;

}






























// #include<iostream>

// using namespace std;

// int main(void){
//     cout<<"Hello world";
//     int x;
//     cout<<"Enter the value of x:"<<endl;
//     cin>>x;
//     cout<<"Value ener is :"<<x<<endl;
//     while(x--){
//         cout<<x<<endl;
//         cout<<"Enter the nane:"<<endl;
//         string name;
//         cin>>name;
//         cout<<"Name after Enter is:"<<name<<endl;
//     }
// }
