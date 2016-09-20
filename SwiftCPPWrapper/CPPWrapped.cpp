//
//  CPPWrapped.cpp
//  LotteryMoot
//
//  Created by Derek Langton on 9/3/16.
//  Copyright © 2016 Moot Dog Dev. All rights reserved.
//

#include <stdlib.h>
#include <string>
#include "CPPWrapped.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
typedef struct Model
{
    int vertices;
    int positions;
    int texels;
    int normals;
    int faces;
    int materials;
}
Model;
// C++ model
//Function for parsing .mtl materials file from blender .obj export
Model getOBJinfo(string fp)
{
    Model model = {0};
    
    // Open OBJ file
    ifstream inOBJ;
    inOBJ.open(fp);
    if(!inOBJ.good())
    {
        cout << "ERROR OPENING OBJ FILE" << endl;
        exit(1);
    }
    
    // Read OBJ file
    while(!inOBJ.eof())
    {
        string line;
        getline(inOBJ, line);
        string type = line.substr(0,2);
        
        if(type.compare("v ") == 0)
            model.positions++;
        else if(type.compare("vt") == 0)
            model.texels++;
        else if(type.compare("vn") == 0)
            model.normals++;
        else if(type.compare("f ") == 0)
            model.faces++;
    }
    
    model.vertices = model.faces*3;
    
    // Close OBJ file
    inOBJ.close();
    
    return model;
}
int CPPWrapped::getMTLinfo(std::string fp){
    
     Model model = {0};
    
    // 2
    
    int m = 0;
    
    // 3
    // Open MTL file
    ifstream inMTL;
    inMTL.open(fp);
    if(!inMTL.good())
    {
        cout << "ERROR OPENING MTL FILE" << endl;
        exit(1);
    }
    
    // 4
    // Read MTL file
    while(!inMTL.eof())
    {
        // 5
        string line;
        getline(inMTL, line);
        string type = line.substr(0,2);
        
        if(type.compare("ne") == 0)
            m++;
    }
    
    // 6
    // Close MTL file
    inMTL.close();
    cout << "Vertices: " << m << endl;
    cout << "Materials: " << model.materials << endl;

    // 7
   return m;
    
}
//Hello world its working

void CPPWrapped::foo(int n)
{
   cout << "Hello, World!\n";
    
}
