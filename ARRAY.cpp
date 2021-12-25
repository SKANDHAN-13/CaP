#include<iostream>
using namespace std;
int main()
{
	int*p;
	int arr[]={0,0,0,0,0};
	int m,n;
	int i,j;
	cout<<"Enter the number of elements : ";
	cin>>m;
	for(i=0;i<m;i++){
		arr[i]=0;
	}
	for(i=0;i<m;i++){
		cout<<"Enter the element : ";
		cin>>n;
		arr[i]=n;
	}
	p=arr;
	for(j=0;j<m;j++){
		cout<<*p<<"\t";
		p++;
	}
	return 0;
	
}
