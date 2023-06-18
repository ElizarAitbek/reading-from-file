//
//  main.cpp
//  reading_from_file
//
//  Created by Elizar Aitbek on 18/6/23.
//

#include <iostream>
#include <fstream>

#define MAX_LINES 1000

using namespace std;

int main() {
    string filename;
    ifstream file;
    string array[MAX_LINES];
    
    cout << "Filename: ";
    cin >> filename;
    
    file.open(filename);
    
    if(file.fail()){
        cout << "File not found" << endl;
        return 1;
    }
    
    int lines = 0;
    while (!file.eof()){
        getline(file, array[lines]);
        lines++;
        if(lines == MAX_LINES){
            cout << "Max storage reached" << endl;
            break;
        }
    }
    
    file.close();
    
    for(int i = 0; i < lines; i++){
        cout << array[i] << endl;
    }
    
    return 0;
}
