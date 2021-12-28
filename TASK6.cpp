#include<iostream>

using namespace std;

class time{
	public:
		int hours;
		int minutes;
		int seconds;
		
		int tot(int hours,int minutes){
			hours=hours*60*60;
			minutes=minutes*60;
			return hours+minutes;
		}
};


int main(){
	int h,s1,m,s,s3;
	time t;
	
	cout<<"HOURS : "<<endl;
	cin>>h;
	
	cout<<"MINUTES : "<<endl;
	cin>>m;
	
	cout<<"SECONDS : "<<endl;
	cin>>s;

	
	cout<<"The time is = "<<h<<":"<<m<<":"<<s<<endl;
	
	s1=t.tot(h,m);
	s3=s1+s;
	
	cout<<"The total time in seconds : "<<s3;
	return 0;
}