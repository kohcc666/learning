#include<iostream>
#include<stack>
#include<deque>

using namespace::std;
deque<int> dq1;
stack<int> stk(dq1);


int main()
{
	for(int i=0;i<10;++i)
		dq1.push_back(i);
	//cout<<"size"<<dq1.size()<<endl;
	stk.push(2);
	cout<<stk.top();
	stk.pop();
	if(stk.empty())
		cout<<"empty"<<endl;
	getchar();
}