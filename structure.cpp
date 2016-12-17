#include <iostream>
using namespace std;

struct Person
{
	int toes;
	int knees;
	int shoulder; 
	int head;	
};

int main()
{
	
Person P[5];

  for (int i=0;i<5;i++)
	{
	
  cin>>P[i].toes;
  cin>>P[i].knees;
  cin>>P[i].shoulder;
  cin>>P[i].head;
	}
  for(int i=0;i<5;i++)
 	{
  cout<<"Person number:"<<i+1;
  cout<<P[i].toes<<"\n";
  cout<<P[i].knees<<"\n";
  cout<<P[i].shoulder<<"\n";
  cout<<P[i].head<<"\n";
	 }
	return 0;
}
