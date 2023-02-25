#include<iostream>
using namespace std;
// print first multiple of 5 also divisible by 7
int main(){
     int i=5;
     while(true){

        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }

     return 0;
     }
