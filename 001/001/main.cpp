//
//  main.cpp
//  001
//
//  Created by Ahmed Ragab on 15/09/2023.
//

/*
 argc -> arguments count
 *argv -> arguments victor
 :: -> scope resolution operator
*/

#include <iostream>

using namespace std;

int main() {
    int fav_number; // favorite number
    cout << "Enter your favourite number: "; // insertion operator
    cin >> fav_number; // extraction operator
    cout <<  fav_number << " is a very good number!" << endl;
    
    return 0;
}
