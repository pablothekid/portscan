#include <iostream>
#include <string.h>
#include "asio.hpp"
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

using namespace std;

int main(){

    // get the user input 
    string ip_addr;
    string port_addr;
    cout << "gimme that ip hoss: ";
        cin >> ip_addr;
    cout << "gimme that port hoss: ";
        cin >> port_addr;

    
    //define a whole bunch of stuff for asio
    asio::error_code er;

    asio::io_context context;

    asio::ip::tcp::endpoint endpoint(asio::ip::make_address(ip_addr, er), port_addr);

    asio::ip::tcp::socket socket(context);

    socket.connect(endpoint, er);

    //checks if you have connected
    if (!er)
    {
        cout << "connected" << endl;

    }
    else
    {
        cout << "not connected:\n" << endl;
    }

    return 0;
}