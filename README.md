clude <iostream>
#include <fstream>
using namespace std;
int main() 
{
	const int SIZE= 10000;
	char values[SIZE];
    int x=0, i=0;
	ifstream infile;
	infile.open("turing.txt");
	
	infile >> values;
	cout << values;

	cout<<"The file is contained: ";
	for(int i=0;i<4;i++)
	{
		cout<< values[i];
	}
	while(x!=5||x!=6)
    x++;{
		int i=0;
		switch(x){
			case 0:if(values[i]=='P'){
				
				values[i]='U';
                i++; x=1;
			}
			else if(values[i]='X')
			{
			  x=5;	
			}
			break;
			case 1:if(values[i]=='P')
			{
				values[i]='X';
				i++;
				x=2;
			}
			else if(values[i]=='X')
			{
				i++; x=1;
			}
			else if(values[i]=='U')
			{
				i++; x=6;
			}
			case 3:if(values[i]=='P')
			{
			values[i]='X';
			i++; x=1;
			}
			break;
			case 4:if(values[i]=='P')
			{
				i--;
			}
			break;
			case 5:cout<<"The tape was rejected"<<endl;
			cout<<endl<<"The final tape was: "<<values[i];
			break;
			case 6:cout<<endl<<"The tape was accepted"<<endl;
			cout<<"The final tape was: "<<values[i];
			break;

		}
	}


	return 0;
}
