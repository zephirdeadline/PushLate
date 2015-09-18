#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	bool chauffeur = false, bouton = false;
	time_t now = time(NULL);
	char entree;
	while(true)
	{
	while(!chauffeur)
	{	
		cin >> entree;
		if(entree == 'a')
		{
			chauffeur = !chauffeur;
			entree = NULL;
		}	
	}	
	while(chauffeur)
	{
		if(chauffeur && bouton)
		{
			now = time(NULL);
			cout << ctime(&now) << endl;
			cout<<"un ticket!"<<endl;
			bouton = !bouton;
		}
		cin >> entree;
		if(entree  == 'b')
		{
			bouton = !bouton;
			entree = NULL;
		}
		else{chauffeur = !chauffeur;}
	}
	}
	return 0;
}
