#include <iostream>
#include <fstream>
//#include <string>
#include "cstring"
#define MAX_LINE_LENGTH 1000
#include "lib/stream/appStream.h"
#include "lib/pointer/firstFile.h"
using namespace std;





int main(int argc, char* argv[])
{
    string pointer = "-mode FilePointer";
    string stream = "-mode FileStream";
    if(pointer==argv[1]){
        cout<<"-mode FilePointer"<<endl;
        appPointer();
    }else if(stream==argv[1]){
        cout<<"-mode FileStream"<<endl;
        appStream();
    } else{
        cout<<"No args"<<endl;
    }
    return 0;
}
