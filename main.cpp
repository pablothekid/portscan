//all of this code is just made for testing before i build on it to make a full on port scanner

#include <iostream>
#include <string.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;

int main(){
     
    string ip;
    string ping = "ping "; 
    string result;

        cout << "give me that ip hoss: ";
        cin >> ip;
        result = ping + ip;

    system(result.c_str());

    return 0;


}