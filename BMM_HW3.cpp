//Brandon McDonough
//HW 3-Bubble Sort Problem
//Use bubble sort on an array
//{4,9,2,1,3,4,7,8,5,0,6} from a text file

/*Bubble Sort is a sorting algorithm that sorts data in order. 
It is a faster of other sorting methods but isn't the fastest.
Quick Sort is faster along with other algorithms
*/

//Packages to include
#include <iostream> //for streams
#include <fstream>  //for files
#include <cstdlib>  //for exit
using namespace std;  

//Variables
const int size=11;
int arr[size]={0};
 
//Reads File Inputed
void read_data(){ 
	//Variables and filename Char
	int x, i=0;
	char fileName[15];
	
	//ifstream constructor opens the file as fileInput
	ifstream fileInput;//ifstream is input file
	    
	//Enter name of file to be sorted
	cout<<"Enter the file name from the HW to be sorted\n";
	cin>>fileName;
	cout<<endl;//Adds line for better spacing and visual organization
	    
	//Checks to see if file is real int the folder the cpp file is in
	fileInput.open(fileName,ios::in);
	if(fileInput.fail()){
	    cerr <<"File could not be opened or is in the folder!\nPlease place txt document in the same folder and restart";
	    cin.get();
	    exit(1);
	}
	
	//Outputs Orignial file numbers
	cout<<"Original File To Be Sorted:\n";
	while(fileInput>>x){
	    arr[i++]=x;
	    cout<<x<<"  ";//Two spaces between number
	}
	cout<<endl;//Adds line between unsorted and sorted
	fileInput.close(); //closes the file-->Always have to close file after completing use
}

//Prints Out Sorted Numbers In A File Name "numSorted.txt"
void print_data(){
	int x, i=0;  
	       
	//Creates a new file to read out sorted numbers called "numSorted.txt"
	ofstream fileOut;//ofstream is output file
	fileOut.open("numSorted.txt", ios::out);
	
	//Outputs sorted file with for loop
	for(i=0;i<size;i++){
	   fileOut<<arr[i];
	   cout<<arr[i]<<"  ";//Two spaces between number
	}
	fileOut.close();//Closes the file-->Always have to close file after completing use
}

//Sorts Numbers From File With Bubble Sort Method
void bubble_sort(){
	int hold;
    for(int i=0;i<size-1;i++){
    	for (int j=0;j<size-1;j++){
        	if (arr[j]>arr[j+1]){
                hold=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=hold;
            }
    	}
    }
}

//Main Method-Calls Other Methods and Functions To Produce Sorted file
	int main(){
	    read_data();//calls read data to read and check file
	    bubble_sort();//calls bubble sort to sort unsorted file read
	    cout <<"\nSorted Numbers:\n";
	    print_data();//calls print datd method prints output of bubble sort method
	    return 0;
	}
