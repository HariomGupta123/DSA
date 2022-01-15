// implementation of queue using array

#include<iostream>
using namespace std;


class queue {
    int front,rear,size;
    int *QUEUE;
    public:
    queue (int Maxsize){

    size = Maxsize;
    QUEUE = new int[size];
    front = rear=-1;
    }

    void enqueue(int item){
        if ( isFull()){
            cout<<"Queue overflow"<<endl;
         }
        else {


            if ( front==-1){front ++;} 
            rear++;
            QUEUE[rear] = item;
}}
      

    

    int dequeue(){
        int temp;
        if ( isEmpty()){
            cout<<"queue is empty"<<endl;
            return -1;
         }
        else {
             temp = QUEUE[front];
             front++;
            
              return temp;

        }
      
}

   bool isFull(){
         if (rear==size-1)
        return true;
        else 
        return false;
   }

   bool isEmpty(){
       if ( rear ==-1)
       return true;
       else 
       return false;

   }

   void display (){
if (isEmpty()){
    cout<<"queue is empty"<<endl;

}else {
    for ( int i=front; i<=rear; i++){
        cout<<QUEUE[i]<<" "<<endl;
    }

}

   }

   ~queue(){delete QUEUE;}

};

int main(){
    queue q(3);
    q.dequeue();
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
  
    q.display();
    q.dequeue();
    q.display();

   

    return 0;



}

