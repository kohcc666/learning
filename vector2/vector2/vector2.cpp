#include<iostream>
#include<list>
#include<vector>
#include<string>

std::list<char*> ls1(5,"hello");
//std::list<int> ls1(5,10);
std::vector<std::string> vec1(7,"world");
// 1--assgin
int main()
{
	std::cout<<vec1.capacity()<<std::endl;
  vec1.assign(ls1.begin(),ls1.end());
  std::cout<<vec1.size()<<std::endl;

  std::cout<<vec1[2]<<std::endl;
  vec1.reserve(50);
  std::cout<<vec1.capacity()<<std::endl;

  getchar();
    getchar();
}

/*
int main()
{
	vec1.erase(vec1.begin(),vec1.end());//vec1.clear();
	std::list<char*>::iterator iter =ls1.begin();
	for(;iter!=ls1.end();++iter)
	{
		vec1.push_back(*iter);
	}
	std::cout<<vec1[1]<<std::endl;
		std::cout<<vec1[2]<<std::endl;
				std::cout<<vec1[3]<<std::endl;
	  std::cout<<vec1.size();
     
  getchar();
    getchar();
	

}*/
