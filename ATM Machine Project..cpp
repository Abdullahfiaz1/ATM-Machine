#include <iostream>
#include<windows.h>
#include<fstream>
#include<time.h>
using namespace std;
ofstream file("data.txt");
void atm();
int main()
{   
    system("Color A");
    int a=1020304050,b=1122;
    int n=a,y=b;
    int i=0;
    int x=2;
    do{
         cout<<"\n\n\n\t\t\tEnter 10-Digit Card No: ";
         cin>>n;
		 cout<<"\n\n\n\t\t\tEnter 4-digit Pin: ";
         cin>>y;
         cout<<"\n\n";
        if(n==a && y==b){
        break;
            }
    else if(n!=a && y!=b) 
    {
        cout<<"\n\t\t\t ||Incorrect Pin ||\n\n"<<endl;
        cout<<"\n\t\t\tYou have left "<<x<<" try\n\n"<<endl;
        cout<<"\n\t\t\t|| Please Wait 5 Seconds  ||\n"<<endl;
        //Loading Bar
        	char x=61;
	        cout<<"\t\t\t   ||<"<<x;
	        Sleep(300);
	         cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(800);
	          cout<<""<<x;
	        Sleep(800);
	          cout<<">||";
	        Sleep(1500);
	        
        system("cls");
    }
    i++;
    x--;
    }while(i<=2);
    
    if(n==a && y==b){
    cout<<"\t"<<"\n\n\t\t\t | LOGIN SUCCESSFull |\n\n\n\n";
    file<<"Login Passed at "<<endl;
    Sleep(1000); 
    system("cls");
    atm();
    }
    else if(n!=a && y!=b)
    cout<<"\n\n\n\n"<<"\t\t\t\t| Program Ended due to Invalid Credentials |\n\n\n";
    exit(1);
    return 0;
}

void atm(){
	
	int option;
	int balance=100,deposite,withdraw,transfer;
	do{
	system("Color A");	
	cout<<"\n\t\t\t****| MENU |*****";
	cout<<"\n\t\t\t*                                 *";
	cout<<"\n\t\t\t*         [1]. Check Balance      *";
	cout<<"\n\t\t\t*         [2]. Deposit            *";
	cout<<"\n\t\t\t*         [3]. Withdraw           *";
	cout<<"\n\t\t\t*         [4]. Transfer           *";
	cout<<"\n\t\t\t*         [5]. Return to Menu     *";
	cout<<"\n\t\t\t*         [6]. Exit               *";
    cout<<"\n\t\t\t************";
    cout<<"\n\t  Choose an Option: ";
    cin>>option;
    system("cls");
    switch(option){
    	case 1:
    		cout<<"\n\t Your Balance is: $ "<<balance<<endl;
    		file<<"\nCurrent Balance: "<<balance<<"\t";
    		break;
    	case 2:
		    cout<<"\n\t Amount your want to Despoit: $ ";
		    cin>>deposite;
		    file<<"Desposite Amount: "<<deposite<<"\t";
		    balance=balance+deposite;
		    cout<<"\n\t Current Balance is: $ "<<balance<<endl;
		    
		    break;
		case 3:
		    cout<<"\n\t Amount your want to Withdraw: $ ";
		    cin>>withdraw;
		    file<<"Withdraw Amount: "<<withdraw<<"\t";
		    balance=balance-withdraw;
		    cout<<"\n\t Available Balance is: $ "<<balance<<endl;
		    break;
		case 4:
			if(balance<=0){
				cout<<"No Balance Available";
				break;
			}
			else{
			cout<<"\n\t Amount your want to Transfer: $ ";
		    cin>>transfer;
		    file<<"Transfer Amount: "<<transfer<<"\t"<<endl;
		    balance=balance-transfer;
		    cout<<"\n\t Current Balance is: $ "<<balance<<endl;
		    break;
		    }
		case 5:
			atm();
		case 6:
			break;
		default:
			cout<<"Invalid Input"<<endl;
			break;
	}
}while(option!=6);
	
}
