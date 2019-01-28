#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct gitHubUser{
	string name;
	string userName;
	string email;
	int folderCount;
	string folderName;
};

void readDataFromFile( gitHubUser * users, string filepath)
{
	ifstream fin;
	ofstream fout;
	fin.open("filepath");
	if(fin.fail())
		cout<<"Could not open file"<<endl;
	else
	{
	int size;
	fin>>size;
	gitHubUser arr[2];
	}
}

int main()
{
	gitHubUsers * a=new gitHubUser[size];
	readDataFromFile();
}

