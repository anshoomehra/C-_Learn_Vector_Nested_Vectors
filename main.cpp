//
//  main.cpp
//  LearnC++
//
//  Created by Anshoo Mehra on 8/22/17.
//  Copyright © 2017 Anshoo Mehra. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <cassert>
#include <sstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    string hello = " ZZZZZZ";
    
    cout << hello << hello.c_str() << endl;
    
//Vector
    vector <double> V;
    
//Vector Of Vector
    vector<vector <double>> VoV;
    
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    
    VoV.push_back(V);
    
// Ways to Print Vector
    
    for (auto i = V.begin(); i != V.end(); ++i)
        std::cout << *i << ' ';
    
    cout << endl;
    
    for(int i=0; i<V.size(); ++i)
        std::cout << V[i] << ' ';
    
    cout << endl;
    
    std::copy(V.begin(), V.end(), std::ostream_iterator<double>(std::cout, " "));
    
    cout << endl;
    
// Ways to print Vector of Vectors
    
    cout << "Sie of VoV:" << VoV.size() << "    Size of V:" << V.size() << endl;
    cout << VoV[0][0] << " " << VoV[0][1] << " " << VoV[0][2] << " " <<endl;
    
    for (int i=0; i < VoV.size(); ++i){
        for (int j=0; j < V.size(); ++j)
            cout << VoV[i][j] << " ";
    
        cout << endl;
    }
    
    // try adding another element to VoV & then print
    vector <double> V1;
    V1.push_back(4);
    V1.push_back(5);
    V1.push_back(6);
    
    VoV.push_back(V1);

    cout << "Sie of VoV:" << VoV.size() << "    Size of V:" << V.size() << "    Size of V:" << V1.size() << endl;
    for (int i=0; i < VoV.size(); i++){
        for (int j=0; j < V.size(); j++)
            cout << VoV[i][j] << " ";
        
        cout << endl;
    }

    
// File Read
    string file_name = "/Users/anmehra/Dropbox/Autonomous Car Driving Udacity/TERM III [ Path Planning, Concentration & Systems ]/Learing Labs/LearnC++/LearnC++/test_states.txt";
    ifstream file_input_obj_(file_name.c_str(), ifstream::in);
    string line_placeholder;
    
    assert(file_input_obj_);
    
    //cout << " File Opened:" << assert(file_input_obj_) << endl;
    
    while (getline(file_input_obj_, line_placeholder))
    {
        // Use this for labels as only one label per line ..
        //cout << line_placeholder <<endl;
        
        // Use below for State, as there are 4 coordinates in one line ..
        istringstream iss_(line_placeholder);
        
        string individual_coordinate;
        
        do {
            cout << individual_coordinate << endl;
        } while (getline(iss_, individual_coordinate, ',')); // delimit by comma
        
    }
    return 0;

}
