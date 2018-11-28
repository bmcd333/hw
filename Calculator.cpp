//Brandon McDonough
//HW 1 - Calculator
#include<iostream>
using namespace std;

int main(){
	//Variables defined here
	int a;
	int b;
	int answer, remainder;
	int choice;

	//TITLE and CHOICES
	cout<<"\tCalculator\n";
	cout<<"\t----------\n";
	cout<<"This program allows you to choose an operation then enter\n";
	cout<<"2 values 'a' and 'b' for the opertaion to be preformed on\n\n";
	cout<<"\tEnter 1 for addition\n";
	cout<<"\tEnter 2 for subtraction\n";
	cout<<"\tEnter 3 for multiplication\n";
	cout<<"\tEnter 4 for division\n";
	cout<<"\nEnter your choice of operation:\n";
	cin>> choice;

	//Data Input Section
	cout<<"\nEnter a value for 'a'':";
	cin>>a;
	cout<<"\nEnter a value for 'b'':";
	cin>>b;

	//CHOICES
	if(choice==1){
		answer=a+b; //ADDITION
	}else if(choice==2){
		answer=a-b; //SUBTRACTION
	}else if(choice==3){
		answer=a*b; //MULTIPLICATION
	}else if (choice==4){
		while(b>0||b<0){	
			answer=a/b; //DIVISION
			remainder= a%b;//MODULUS REMAINDER
			cout<<"Your answer is : "<<answer<<". Your remainder is "<<remainder<<"";
			return 0;
		}
		while (b==0){
			cout<<"Divide By Zero Error!!";
			return 0;
		}
	}
	
//Data Output Section
cout<<"\nYour answer is: "<<answer<<".";

//END
}

