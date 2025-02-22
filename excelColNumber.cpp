#include<bits/stdc++.h>
using namespace std;

int excelColumnToNumber ( string coloumnTitle){
    int columnNumber = 0;

    for ( char ch : coloumnTitle){
        columnNumber = columnNumber * 26 + (ch-'A' + 1);
    }
    return columnNumber;
}

int main(){
    
    // Example Cases
    cout << excelColumnToNumber("A") << endl;   
    cout << excelColumnToNumber("C") << endl;  
    cout << excelColumnToNumber("ZY") << endl;  
    cout << excelColumnToNumber("AAA") << endl; 

    return 0;
}