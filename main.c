#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	string name;
	char input;
	int inputuser;
	int tries;
	cout<<"Enter your name"<<endl;
	getline(cin,name);
do
	{
    srand(0);
    int variable=rand()%10+1;
		cout << "Enter a guess between 1 and 10 : ";
		cin >>inputuser;
		tries++;
		if (inputuser>variable){
			cout << "Too high!\n\n";
		}
		else if (inputuser<variable){
			cout << "Too low!\n\n";
		}
		else
			cout << "\nCorrect!You got it in "<<tries<<" guesses!\n ";
			cout<<"Would you like to try again Y/N :";
			cin>>input;

			}while (input!='N');
			cout<<"Game end";

	return 0;
}
