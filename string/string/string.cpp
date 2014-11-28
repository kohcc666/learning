#include<string>
#include<iostream>
using namespace::std;
//using std::string;
/*
int main()

{
//	char no_null[]={'h','i'};//error 没有空字符，初始化s的时候不知道何时结束
	char no_null[]={'h','i','i','\0'};
    string s(no_null);
	cout<<s<<endl;
    string f(no_null,2);
	cout<<f<<endl;

	getchar();
	getchar();
}*/


int main()
{
	string s;
	s ="hello world and the creator";
    cout<<s<<endl;
	cout<<s.find("world")<<endl;
    string s1 =	s.substr(s.find("w"),sizeof("world"));
	cout<<s1<<endl;

    string s2 ="feild";

	s1.append(s2);
	cout<<s1<<endl;
	getchar();
	getchar();

}