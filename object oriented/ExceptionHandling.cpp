#include<iostream>
using namespace std ;

 class customer{
    string name;
    int balance,acc_no;
    public:

    customer (string name ,int balance,int acc_no){
        this->name=name ;
        this->balance = balance ;
        this->acc_no = acc_no ;

    };
 
    // deposit 
    void deposit(int amount ){
        
        //if(amount >0){
          //  balance = balance + amount ;
            //cout<<amount << "rs is credited "<<endl;
        //}else{
          //  cout<< "enter amount greater than zero"<<endl;
        if(amount <0)
          throw "enter amount greater than zero";

          balance +=amount ;      //exception throw hogya then y chalega hi nhi T
          cout<< amount << "rs is credited sucessfully";
        
    }
    // withdrawal
    void withdraw(int amount){
        if(amount >0 && amount<=balance ){
            balance -=amount ;
            cout<< amount << " rs is debited successfully";
        }else if(amount<0){
           // cout << "amount should be greater than 0 "<<endl;
           throw "enter amount greater than zero";
        }else if (amount >balance){
            //cout<<"enter sufficient amount ";
            throw "insufficient balance ";
        }
    }
 };
int main(){
    customer c1("ana de armas",1980000,58);
    try{  // block checks for exception 
    c1.deposit(-1098);
    c1.withdraw(90000);  // exception agya 
    c1.deposit(100000);  // y chalega hi nhi 
    }
    catch(const char *e){  //pointer to catch the exception 
        cout<<"Eception occured:"<<e<<endl;
    }
    return 0;
}
