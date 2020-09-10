#include <iostream>
#include <string.h>
using namespace std;


class CTest
{
	public:
		char m_buf[400];
};

int main()
{
	char *buf;
	CTest *test = new CTest;
	buf = test->m_buf;
	memcpy(buf,"hello",strlen("hello"));
	cout<<buf<<endl;
	
	delete test;
	test = NULL;
	memcpy(buf,"world",strlen("world"));
	cout<<buf<<endl;


	return 0;
}
