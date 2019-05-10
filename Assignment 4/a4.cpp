/*
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
// 301335629 rsg23 Rajan Grewal
#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

int main(){
    cout << "301335629 rsg23 Rajan Grewal" << endl;
    std::priority_queue<int> q1;
    std:;priority_queue<int> q2;
    int x ;

    bool List2 = false; 

    cin >> x ;
    while( !cin.eof() ){ //creating 2 queues
        if( x == 0 ){
            List2 = true ;
        }else{
            if(List2==false){
            //cout << x << " " ;
            q1.push(x);
            }
            else if(List2==true){
                q2.push(x);
            }
        }
        cin >> x ;
        }   

    int answer=-1;
        if(q1.empty()){
        cout << "NONE" << endl;
        return answer;
    }
    if(q2.empty()){
        answer = q1.top();
    }

    while(!q2.empty()){
        int max2=q2.top();
        int max=q1.top();
        if(max>max2){
            answer = q1.top();
            break;
        }
        if(max<max2){
            q2.pop();
            answer = q2.top();
        }
        if(max==max2){  //eliminates duplicates from top of each stack
            q1.pop();
            while (q1.top()==max && !q1.empty())
                q1.pop();

            q2.pop();
            while (q2.top()==max && !q2.empty())
                q2.pop();
        }

    }
    if(q1.empty())
     cout << "NONE" << endl;
    else
        cout << q1.top() << endl;
}


