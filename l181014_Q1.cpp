#include<iostream>
#include<string>
using namespace std;

struct gitHubUser{  //struct of github users

	string firstName;
	string userName;
	string password;
	string email;
    int folderCount; 
};

bool exists(gitHubUser* arr, int size, string userName) 
{          
	// to find double username
	for(int i=0;i<size;i++)
	{
    for(int j=i+1;j<size;j++)
	{
	if(arr[i].userName==arr[j].userName)
	{
	cout<<"This userName already exists, enter another userName"<<endl;
	return false;
	}
	else
		return true;
	}
	}
}

gitHubUser * searchUser ( gitHubUser * users, int size, string userName){
	
	cout<<"Enter username to find its adress"<<endl;
	cin>>userName;
for(int i=0;i<size;i++)
{
	if(users[i].userName==userName)
    return  &users[i]; 
}

} 

void output(gitHubUser * arr, int size)
{ 
	//for output the githubusers
	for(int i=0;i<size;i++)
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

void inputFromUser(gitHubUser * arr, int size)
{
    // for take input in github users
	bool check=true;
	for(int i=0;i<size;i++)
	{
    cout<<endl<<"Enter the elements of Structs"<<endl;
	cout<<"UserName :";cin>>arr[i].userName;
	
	check=exists(arr,size,arr[i].userName);
	if(check==false)
	{cout<<"UserName :";cin>>arr[i].userName;}
	
	cout<<"FirstName :";cin>>arr[i].firstName;
    cout<<"Password :";cin>>arr[i].password;
	cout<<"Email :";cin>>arr[i].email;
	cout<<"Folders :";cin>>arr[i].folderCount;
	}
}


bool Comparison(gitHubUser a, gitHubUser b)
{
    // for comparing 2 github users
	if(a.firstName==b.firstName && a.userName==b.userName && a.password==b.password && a.email==b.email)
		{
			cout<<"The structs are same"<<endl;
	        return true;
	    }
	else
      {		
		    cout<<"The structs are not same"<<endl;
	        return false;
	  }
}

int main()
{
	//part a
	int size=4;
	gitHubUser * a=new gitHubUser[size];  //for part a and b
	gitHubUser * b=new gitHubUser[2];    //for comparison
	inputFromUser(a,size);
	output(a,size);


	//part b


	//comparison
	cout<<endl<<"For Comparison"<<endl;
	inputFromUser(b,size);
	output(b,size);
	Comparison(b[0],b[1]);
	

	delete [] a;
	delete [] b;
	return 0;
}