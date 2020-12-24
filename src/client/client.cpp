//client.cpp

#include "clientsession.h"
#include "../com/protocol.h"

#include <iostream>
#include <boost/asio.hpp>

using namespace boost::asio;
using namespace std;
using ip::tcp;

int main(int c, char** argc){
	if(c<2){
		cerr<<"usage: client hostname"<<endl;
		return 1;
	}
	string host = argc[1];
	cout<<"Welcome to homectl client for unix/linux"<<endl;
	cout<<"Connecting to host: "<<host<<endl;
	ClientSession session(1200, host);
	session.connect();
	string in;
	cin>>in;
}
