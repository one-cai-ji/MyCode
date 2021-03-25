#include <string>
#include "Fun.h"
using namespace std;

//Multiset的第二个参数			注意后面一定得是const的
//const 对象只能调const函数
class MyComp {
public:
	bool operator()(const std::string& str1, const std::string str2) const {
		if (str1.size() == str2.size()) {
			return str1 < str2;
		}
		return str1.size() < str2.size();
	}

};
