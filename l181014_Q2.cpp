#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct gitHubUser{
	//struct of github users
	string name;
	string userName;
	string email;
	int folderCount;
	string folderName;
};

void readDataFromFile( gitHubUser * users, string filepath)
{  //to read data from file
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

