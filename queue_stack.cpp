#include<iostream>
using namespace std;
class queuestack{
    Stack2<int>s2;
    Stack2<int>s2;
    public:
    void push(int x){
        s1.push(x);   
    }
    void pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();

            }
        }
        int topval =s2.top();
        s2.pop();
        return topval;
    }
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
            return false;
        }
    }
};
int main(){
    queuestack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<p.pop()<<"\n";
    cout<<p.pop()<<"\n";
    cout<<p.pop()<<"\n";
    cout<<p.pop()<<"\n";
    return;



}
