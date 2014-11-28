#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

int getnum()
{using namespace::std;
	cout<<"please enter num:"<<endl;
	int n ;
	std::cin>>n;
	return n;
}
/*int main()
{
	std::vector<int> vec1;
	int i;
	for(i=0;i<5;i++)
	{
		vec1.push_back(getnum());	
	}
	std::vector<int>::iterator iter = vec1.begin();
	for(int n=1;iter!=vec1.end();++iter,n++)
	{
		std::cout<<"the"<<n<<"th num is:";
		std::cout<<*iter<<std::endl;
	
	}
	std::cout<<"delete ? num:"<<endl;
	int m;
	std::cin>>m;

	getchar();
	getchar();
	getchar();
	getchar();
	return 0;

}*/

int main()
{
	std::list<int> ls1;
	int i;
	for(i=0;i<5;i++)
	{
		ls1.push_back(getnum());	
	}
	std::list<int>::iterator iter = ls1.begin();
	for(int n=1;iter!=ls1.end();++iter,n++)
	{
		std::cout<<"the"<<n<<"th num is:";
		std::cout<<*iter<<std::endl;
	
	}


	std::cout<<"insert num:"<<std::endl;
	int m;
	std::cin>>m;
	ls1.insert(--iter,m);
			iter=ls1.begin();
	for(int n=1;iter!=ls1.end();++iter,n++)
	{

		std::cout<<"the"<<n<<"th num is:";
		std::cout<<*iter<<std::endl;
	
	}
	//for(int n=1;)
/*	iter--;
		iter--;
	ls1.erase(iter);*/
	ls1.pop_front();
				iter=ls1.begin();
	for(int n=1;iter!=ls1.end();++iter,n++)
	{

		std::cout<<"the"<<n<<"th num now is:";
		std::cout<<*iter<<std::endl;
	
	}

    iter = find(ls1.begin(),ls1.end(),3);

	ls1.erase(iter);
				iter=ls1.begin();
	for(int n=1;iter!=ls1.end();++iter,n++)
	{

		std::cout<<"the"<<n<<"th num now is:";
		std::cout<<*iter<<std::endl;
	
	}

	getchar();
	getchar();
	getchar();
	getchar();
	return 0;

}