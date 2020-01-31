// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string y,z;
    cout<<"Please Enter 3 times to reveal your future.";
    getline(cin,y);
    getline(cin,y);
    getline(cin,y);
    srand(time(0));
    int x=rand()%9;
    if(x==0) z="A";
    else if(x==1) z="B+";
    else if(x==2) z="B";
    else if(x==3) z="C+";
    else if(x==4) z="C";
    else if(x==5) z="D+";
    else if(x==6) z="D";
    else if(x==7) z="F";
    else if(x==8) z="W";
    cout<<"You will get "<<z<<" in this 261102.";
}