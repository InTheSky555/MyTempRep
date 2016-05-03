#include <iostream>
#include <vector>
#include <string.h>
using std::vector;
using std::string;
using std::cout;
using std::endl;
int main()
{
	vector<string> strvec(10,"hi!");
	for(vector<string>::iterator iter = strvec.begin();
		iter != strvec.end();
		++iter			
		)
	{
		*iter = "I am HuangWu \r\n";	
	}
	for(vector<string>::const_iterator c_iter = strvec.begin();
	   	c_iter != strvec.end();
		++ c_iter	   
	   )
	{
		cout << *c_iter << endl;
	}
	std::cout << strvec[0] << strvec[1]
			  << strvec[2] << strvec[3]	
			  << strvec[4] << strvec[5]
			  << strvec[6] << strvec[7]
			  << strvec[8] << strvec[9]
			  << strvec.size()
			  << endl;
    strvec.push_back("the new element");
	cout << strvec[10] << endl;
	cout << strvec.size() << endl;
	return 0;
}
