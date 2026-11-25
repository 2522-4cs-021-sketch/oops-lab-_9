#include<iostream>
using namespace std;

int main(){
		int n;
		cout<<"number of students";
		cin>>n;
		int* marks = new int[n];
		
		cout<<"enter"<<n<<"marks";
		for(int i=0;i<n;i++){
			cin>>marks[i];
		}
		
		int total=0;
		for(int i=0;i<n;i++){
			total=total+marks[i];
		}
		
		double average =(double)total/n;
		
		int highest =marks[0];
		for(int i=1;i<n;i++){
			if(marks[i]>highest){
				highest =marks[i];
			}
		}
		
		cout<<"average"<<average<<endl;
		cout<<"highest"<<highest<<endl;
		
		cout<<"above average";
		for(int i=0;i<n;i++){
			if(marks[i]>average){
				cout<< marks[i]<<" ";
			}
		}
		cout<<endl;
		
		delete[]marks;
		marks=nullptr;
		
		return 0;
	
}