#include<iostream>
using namespace std;

int printO(int row,int column){
    if (row <= 0 || column <= 0){
        cout << "Invalid input";
        return 0;
    }
	for (int i = row; i > 0; i--){
		if (i != row)
		{
			cout << "\n";
		}
		
		for (int j = column; j > 0; j--){
			cout << 'O';
		}
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
