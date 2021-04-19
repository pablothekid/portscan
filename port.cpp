#include <iostream>
#include <string.h>
#include "asio.hpp"
#include <asio/ts/buffer.hpp>
#include <asio/ts/internet.hpp>

using namespace std;

int main(){

    string ip_addr;
    string port_addr;
    cout << "gimme that ip hoss: ";
        cin >> ip_addr;
    cout << "gimme that port hoss: ";
        cin >> port_addr;

    

    asio::error_code er;

    asio::io_context context;

    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("192.168.0.1", er), 80);

    asio::ip::tcp::socket socket(context);

    socket.connect(endpoint, er);

    if (!er)
    {
        cout << "connected" << endl;

    }
    else
    {
        cout << "no connect:\n" << endl;
    }

    return 0;
}