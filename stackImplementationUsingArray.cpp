// implementation of stack using array

#include<iostream>
using namespace std;


class stack {
    int top,size;
    int *STACK;
    public:
    stack (int Maxsize){

    size = Maxsize;
    STACK = new int[size];
    top = -1;
    }

    void push(int item){
        if ( isFull()){
            cout<<"Stack overflow"<<endl;
         }
        else {
            top++;
            STACK[top] = item;

        }
      

    }
    int pop(){
        int temp;
        if ( isEmpty()){
            cout<<"Stack is empty"<<endl;
           

        }
        else {
             temp = STACK[top];
              top--;
              

        }
        return temp;

    }

   bool isFull(){
         if (top==size-1)
        return true;
        else 
        return false;
      

   }

   bool isEmpty(){
       
         if ( top ==-1)
       return true;
       else 
       return false;

   }

   void display (){
if (isEmpty()){
    cout<<"Stack is empty"<<endl;

}else {
    for ( int i=0; i<=top; i++){
        cout<<STACK[i]<<" "<<endl;
    }

}

   }

   ~stack(){delete STACK;}

};

int main(){

    stack s(3);
    s.push(5);
    
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.display();

    return 0;



}

