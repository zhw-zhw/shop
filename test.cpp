#include<iostream>
using namespace std;
#include<vector>



void printvector(vector<int>&v)
{
	for (int i=0;i<v.size();i++)
	{
		cout << v[i]<< " ";
	}

	cout << endl;
}
void test01()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector(v1);

	vector<int> v2;

	for (int i = 10; i>0; i--)
	{
		v2.push_back(i);
	}
	printvector(v2);


	v1.swap(v2);
	printvector(v1);
	printvector(v2);




}

int main()
{

	test01();

	system("pause");
	return 0;
}