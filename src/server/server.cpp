#include <iostream>
#include <string>
#include <boost/asio.hpp>

#include "../com/session.h"
#include "serversession.h"

using namespace boost::asio;
using boost::asio::ip::tcp;
using namespace std;

int main(int c, char** argv) {
    cout << "Lifty Server" << endl;

	ServerSession session(1200);
	session.connect();

    while (1) {
        session.getConnections();
    }
}
