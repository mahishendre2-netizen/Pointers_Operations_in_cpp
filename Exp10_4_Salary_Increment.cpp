// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;
void increment(int count,int salary){
    
    if(count>=3){
        int newsalary=((salary*20)/100)+salary;
        cout<<"new salary = "<<newsalary<<endl;
    
    }
    else{
        cout<<"no increment ";
    }
    
    
    return;

}
int main(){
    int researchproject;int researchpublication;int profit;int newproject;
    cout<<"No. of research project done: "<<endl;
    cin>>researchproject;
    cout<<"No. of research publication done : "<<endl;
    cin>>researchpublication;
    cout<<"enter the profit"<<endl;
    cin>>profit;
    cout<<"No of new projects by the firm : "<<endl;
    cin>>newproject;
    int count=0;
    if(researchproject>=1){
        count++;
    }
    if(researchpublication>=1){
        count++;
    }
    if(profit>=100000){
        count++;
    }
    if(newproject>=1){
        count++;
    }
    int salary;
    cout<<"enter your salary : "<<endl;
    cin>>salary;
    increment(count,salary);
    
    
}

/*
Output:
Case 1:
No. of research project done by you: 
20
No. of research publication done by you: 
15
enter the profit
20000
No of new projects by the firm : 
12
enter your salary : 
50000
new salary = 60000
*/

/*
Output:
Case 2:
No. of research project done by you: 
1
No. of research publication done by you: 
1
enter the profit
0
No of new projects by the firm : 
0
enter your salary : 
5000
no increment
*/
