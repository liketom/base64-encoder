#include <iostream>
#include "Base64.h"

using namespace std;

char *str_or="1234567";

int main(int argc, char *argv[])
{
	int len = strlen(str_or);
	int ret;
	char *ptr = (char*)malloc(len*2);
	char *de_out = (char*)malloc(len*2);
    memset(ptr, 0, len * 2);
    memset(de_out, 0, len * 2);
	ret = Base64Encode(str_or,len,ptr,len*2);
	cout<<"Encode("<<ret<<"):"<<ptr<<endl;
	
	Base64Decode(ptr,ret,de_out,len*2);
	cout<<"Decode:"<<de_out<<endl;

	cout<<"Hello C-Free!"<<endl;
	
	return 0;
}
