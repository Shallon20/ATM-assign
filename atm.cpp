#include <iostream>
using namespace std;

class Atm{
    private:
        float amount;
        float balance = 1234.00;

    public:
        void checkBalance(){
            cout << "Your current balance is: EUR" << balance <<endl;
            cout << "_____________________________________________________" << endl;
        }
        void withdraw(){
            cout << "Enter the amount to withdraw: EUR" ;
            cin >> amount;
            if((amount < balance) && (amount != 0)){
                balance = balance - amount;
                cout << "You have successfully withdrawn your cash. Please collect it below" << endl;
                cout << "Your current balance is: EUR" << balance <<endl;
                cout << "_____________________________________________________" << endl;
            }
            else 
                if(amount == 0){
                cout << "INVALID AMOUNT" << endl;
            }
            else{
                cout << "Insufficient balance!!!" << endl;
                cout << "_____________________________________________________" << endl;
            }
        }
        void deposit(){
            cout << "Enter the amount to deposit: EUR";
            cin >> amount;
            if(amount > 5){
            balance = balance + amount;
            cout << "You have successfully deposited your cash." << endl;
            cout << "your current balance is: EUR" << balance <<endl;
            cout << "_____________________________________________________" << endl;
            }
            else{
                cout << "Deposit more than EUR 5" << endl;
                cout << "_____________________________________________________" << endl;
            }
        }
        
};

int main(){
    Atm a;
    int choice, p, pin = 0000;
    cout << "Enter your PIN :";
    cin >> p;
        if(p == pin){
            while(1){
                cout << "*****************WELCOME TO OUR ATM******************" << endl;
                cout << "*****************************************************" << endl; 
                cout << "\tWhat service do you need?" << endl;
                cout << "\t\t1. Check Balance" << endl;
                cout << "\t\t2. Withdraw Cash" << endl;
                cout << "\t\t3. Deposit Cash" << endl;
                cout << "\t\t4. Exit" << endl;
                cout << "*****************************************************" << endl;
                cin >> choice;
                
                switch(choice){
                    case 1:
                        a.checkBalance();
                        break;
                    case 2:
                        a.withdraw();
                        break;
                    case 3:
                        a.deposit();
                        break;
                    case 4:
                        exit(1);
                        break;
                    default:
                        cout << "\t\t\t INVALID CHOICE!!!" << endl;
                        cout << "_____________________________________________________" << endl;
                }
            }
        }
        else{
                cout << "\t******INCORRECT PIN! TRY AGAIN.......!*****" << endl;
                cout << "_____________________________________________________" << endl;
            }

}
