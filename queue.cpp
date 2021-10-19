#include<iostream>
using namespace std;

class Queue{

 private:
     int arr[10];
     int maxSize;
     int fr0nt,rear;


 public:

     Queue(){

       fr0nt = -1;
       rear = -1;
       maxSize= 10;

     }


     bool isEmpty(){

      if(fr0nt==-1&&rear==-1){
        return true;

      }
      else {

    return false ;
      }

     }



     bool isFull(){

     if (rear==9){

        return true;
     }
     else
     {

         return false;
     }

     }


     void enqueue(int val){

         if(isFull()){

            cout << " Queue is Full "<<endl;
         }
         else if(isEmpty()){

            fr0nt=rear=0;

             arr[rear]=val;

             cout<<"Value Added" <<endl;
         }
         else{

         rear++;
         arr[rear]=val;
         cout<<"Value Added" <<endl;
         }
     }



   int deQueue(){

      if(isEmpty()){

        cout<<"Queue IS Empty"<<endl;
        return 0;

      }
      else if (fr0nt==rear){
        int temp=arr[fr0nt];

        fr0nt=rear=-1;
        cout<<"Last Value Deleted , Again Both Front and Rear Value set To -1" <<endl;
        return temp;
      }

      else{

         int temp=arr[fr0nt];
         fr0nt++;
         return temp;

      }




   }
        void totalElements(){
             if(isEmpty()){

                cout<<" Opssss Sorry , The Queue IS Empty "<<endl ;

             }

             else {

                int temp= rear-fr0nt+1;
                cout<< "Total Elements : "<<temp<<endl;
             }

      }


         void showElements(){

             if(isEmpty()){

                cout<<" Empty "<<endl;
             }


              for(int i=fr0nt; i<=rear ; i++){

                cout<<arr[i]<< " ";
              }

         }



};


int main (){

 Queue obj;

 int option , choice;
 bool loop= true;

 do{
    cout<<"1. Enqueue () "<<endl;
    cout<<"2. Dequeue () "<<endl;
    cout<<"3. SHow Elements () "<<endl;
    cout<<"4. Total Elements () "<<endl;
    cout<<"5. Clear Screen "<<endl;
    cout<<"6. Exit () "<<endl<<endl;
    cout<<"What Operation You Want To Perform ???  "<<endl;


    cin>>option;

    switch(option){

case 1:

      cout<<" Please Enter A Value To Enqueue " <<endl;
      cin>>choice;
      obj.enqueue(choice);
      break;

case 2:

      obj.deQueue();
      break;


case 3:

       obj.showElements();
       break;

case 4:

      obj.totalElements();
      break;

case 5:
       option=false;
       break;

default:
    cout<< "Please Enter A Valid Option"<<endl;


    }


 }while(loop!=false);




return 0;
}
