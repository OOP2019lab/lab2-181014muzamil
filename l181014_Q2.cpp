#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct gitHubUser{  //struct of github users

	string firstName;
	string userName;
	string password;
	string email;
	string * folders;
        int    folderCount; 
        string * nameofins;
	string * qualification;  
};

void output(gitHubUser * arr, int userCount)
{ 
	//for output the githubusers
	for(int i=0;i<userCount;i++)
	{
    cout<<endl;
    cout<<"the elements of Structs are"<<endl;
	cout<<"UserName :"<<arr[i].userName<<endl;
	cout<<"FirstName :"<<arr[i].firstName<<endl;
	cout<<"Password :"<<arr[i].password<<endl;
	cout<<"Email :"<<arr[i].email<<endl;
	cout<<"Folders :"<<arr[i].folderCount<<endl;
	cout<<endl;
	}
}

void readDataFromFile( gitHubUser * users)
{
	users=new gitHubUser[2];
	ifstream fin;
	fin.open("c:\\temp\\m.txt");
	if(!fin)
	{
		cout<<"Could not load File"<<endl;
	}
	else
	{
		int size=0;
		int folder;
		fin >> size;
		for(int i=0;i<size;i++)
		{
			fin>>users[i].firstName;
			fin>>users[i].userName;
			fin>>users[i].email;
			fin>>users[i].folderCount;
			folder=users[i].folderCount;
			users[i].folders=new string[folder];
			fin.ignore();
			for(int j=0;j<folder;j++)
			{
				getline(fin, users[i].folders[j]);
			}
		
		}
		output(users,size);
	}
}

int main(){
	gitHubUser * users=new gitHubUser [2];
        readDataFromFile(users);
	return 0;
}
