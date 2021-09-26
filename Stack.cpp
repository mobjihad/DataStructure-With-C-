#include<iostream>
using namespace std;


class Stack{

     private:
       int arr[5];
       int top;

      public:
         Stack () {

             top = -1;
             for(int i = 0; i <5; i++) {


                 arr[i] =0;

             }

         }


      bool isFull(){

            if(top==4){

                return true;
            }
            else{

                return false;
            }

      }


    bool isEmpty(){

        if(top==-1){
            return true;
        }

        else{

            return false;
        }
    }


     void push(int val){

         if(isFull()){

             cout<<"Stack OverFlow"<<endl;
         }

         else{

             top++;
             arr[top]=val;
         }


     }


    int pop (){

          if(isEmpty()){

              cout<<" Stack Underflow"<<endl;

          }

          else{

              int popValue= arr[top];
              arr[top]=0;
              top--;

              return popValue;

          }
    }


    int peek(int pos){
       if(isEmpty()){
        cout<<" Stack UnderFlow " <<endl;
        return 0;

       }
       return arr[pos];

    }

    int count(){

        return top+1;
    }


    void change(int position, int val){

         arr[position]=val;

    }


  void display(){


         for (int i = 4; i >= 0 ; i--)
         {
             cout<<arr[i]<<endl;
         }

  }



};


int main(){

 int option,position,value;

 Stack b;

 do
 {

    cout<<"0. Exit"<<endl;
     cout<<"1. Push "<<endl;
     cout<<"2. Pop "<<endl;
     cout<<"3. Count()"<<endl;
     cout<<"4. Display() "<<endl;
     cout<<"5. Change() "<<endl;
     cout<<"6. peek ()"<<endl;
     cout<<"7. isEmpty() "<<endl;
     cout<<"8. isFull()"<<endl;
     cout<<"9. Clear Screen"<<endl;
     cout<<" What Operation You Want To Run :  ";

     cin>>option;

     switch(option){

         case 1:

         cout<<" Please Enter A Value To Push  : ";
         cin>>value;
         b.push(value);
         break;

        case 2:
         cout<<"Pop Function Called , The Pop Value Is "<<b.pop()<<endl;
         break;

        case 3:

           cout<<"There Are "<<b.count()<<" Elements in The Stack"<< endl;
           break;
        case 4:
           cout<<" The Values In The Stack Are :"<<endl;
           b.display();
           break;

        case 5:
           cout<<" Which Position's Value You Want To Change ? :";
           cin>>position;
           cout<<" Provide The Value : ";
           cin>>value;
           b.change(position,value);
           break;

        case 6:
           cout<<"Which Position's Value You Want To Peek ? : ";
           cin>>position;
           cout<<b.peek(position)<<endl;
           break;

        case 7:
           if(b.isEmpty()){

               cout<<" Yes The Stack Is Empty"<<endl;

           }
           else{

               cout<<" The Stack IS Not Full"<<endl;

           }
          break;

        case 8:

           if(b.isFull()){

               cout<<" Yes The Stack IS Full"<<endl;
           }
           else{

               cout<<" The Stack Is Not Full"<<endl;
           }
           break;

        case 9:
           system("cls");
           break;

        default:
            cout<<"PLease Input A Proper Number "<<endl;


     }


 } while (option!=0);

   return 0;

}
