//In stack ---> Last In first out
//We can implement stack also using other containers(e.g.,vector,deque,list) 
#include<iostream>
#include<stack>
using namespace std;
int main(){
     stack<int>st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);
     st.push(50);

    
    

     cout<<"Size: "<<st.size()<<endl;
     st.pop();//removes from end
     cout<<"Size after pop: "<<st.size()<<endl;
     cout<<"Top element: "<<st.top()<<endl;

   
     if(st.empty()==true) {
        cout<<"Stack is empty";
     }

     else {
        cout<<"Stack is not empty";
     }
     cout<<endl;

      stack<int>st1;
     st1.push(21);
     st1.push(22);
     st1.push(23);
     st1.push(24);

     //swap
     st.swap(st1);
    cout<<"Top element: "<<st.top()<<endl;




    stack<string>s;
    s.push("vaishnavi");
    s.push("raj");
    s.push("btech cse");
    cout<<"first elemnts--> "<<s.top()<<endl;
    s.pop();
    cout<<"first elemnts--> "<<s.top()<<endl;
    s.pop();
    cout<<"first elemnts--> "<<s.top()<<endl;
    

}
