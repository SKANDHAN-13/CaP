#include<iostream>
using namespace std;
int main()
{
	int age,no;
	char v;
	cout<<"Enter the age : ";
	cin>>age;
	
	if(age>=18){
		cout<<"Enter the proof given while registering to vote(P-Pan card,R-Ration card,D-Driving license,A-Aadhar card): ";
		cin>>v;
		if(v=='P' or v=='R' or v=='D' or v=='A'){
		    cout<<"Enter the ID number :";
		    cin>>no;
		    cout<<"Please proceed to voting section.";
	    }
		
		
	}
	else{
		cout<<"Kindly wait till 18 years of age.";
	}
	return 0;
}