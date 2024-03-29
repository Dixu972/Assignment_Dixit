/* 2). Define a class to represent a bank account. Include the following members:
	1. Data Member:
	-Name of the depositor		-Account Number		-Type of Account		-Balance amount in the account
	2. Member Functions:
	-To assign values		-To deposited an amount		-To withdraw an amount after checking balance		-To display name and balance   */
#include<iostream>
using namespace std;
class bank{
	string name;
	int accountnum;
	int bal;
	public :
	void account_details()
	{
		int option;
		
		cout<<"Enter The Name Of Depositor : ";
		cin>>name;
		cout<<"Enter Account Number : ";
		cin>>accountnum;
		cout<<"Type 1 For Saving Account\nType 2 For Current Account\n";
		cout<<"Select From Above : ";
		cin>>option;
		
		switch(option)
		{
			case 1:
				cout<<"Your Account Is Saving";
				break;
			case 2:
				cout<<"Your Account Is Current";
				break;
			default:
				cout<<"Enter From Above";
		}
		
		cout<<"\nYour Account Balance Is : ";
		cin>>bal;
	}
	void add_money()
	{
		float amount;
		cout<<"Enter The Deposite Amount :  ";
		cin>>amount;
		bal+=amount ; 
		cout<<"Your Total Balance Is  "<<bal;
	}
	void withdraw_money()
	{
		float amount;
		cout<<"\nEnter The Withdraw Amount :  ";
		cin>>amount;
		if(amount>bal)
			cout<<"Can't Withdraw Amount\n";
		bal-=amount ; 
		cout<<"Your Total Balance Is  "<<bal<<endl;
	}
	void diplay()
	{
		cout<<"\n--------Account Holder Detail's--------"<<endl;
		cout<<"\nAccount Number :"<<accountnum;
		cout<<"\nAccount Holder Name : "<<name;
		cout<<"\nAccount Balance : "<<bal;
	}
};
int main()
{
	bank b1;
	b1.account_details();
	b1.add_money();
	b1.withdraw_money();
	b1.diplay();
	
	return 0;
}
