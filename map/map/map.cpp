#include<iostream>
#include<utility>
#include<map>
#include<string>
#include<fstream>
using namespace::std;

ifstream& open_file(ifstream& in, string filename)
{
	in.close();
	in.clear();
	in.open(filename.c_str());
	return in;
}

int wordchange(string CWfname,string Filename)
{

return 0;
}

int main()
{
	ifstream map_file;

	open_file(map_file,"D:\\GitHub\\learning\\map\\helloworld.txt");

	cout<<map_file<<endl;
/*
	pair<int ,int> p1(3,7);
	map<int ,int>  m1;

	m1[1]= 2;
	m1.insert(p1);
	m1.insert(make_pair(2,5));
	int n;
	cin>>n;
	if(m1.find(n)!=m1.end())
	cout<<m1.find(n)->second<<endl;//return 
	else
		cout<<"not exist"<<endl;
	cout<<m1.size()<<endl;

	cout<<m1.count(6);

	m1.erase(5);
	//cin.clear();
		cin.sync();*/
	getchar();
}