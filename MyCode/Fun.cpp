#include <string>
#include "Fun.h"
using namespace std;

//Multiset�ĵڶ�������			ע�����һ������const��
//const ����ֻ�ܵ�const����
class MyComp {
public:
	bool operator()(const std::string& str1, const std::string str2) const {
		if (str1.size() == str2.size()) {
			return str1 < str2;
		}
		return str1.size() < str2.size();
	}

};
