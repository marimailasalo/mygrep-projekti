//Mari Máilasalo
// MyGrep tehtävä

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "fi_FI");
	string inputString;
	string searchString;

	//kysytään syötettä
	cout << "Syötä ketju: ";
	getline(cin, inputString);

	//kysy mitä etsitään
	cout << "Syötä etsittävä ketju: ";
	getline(cin, searchString);

	//etsitään ketjusta
	size_t found = inputString.find(searchString);
	if (found != string::npos)
	{
		cout << "Ketju löytyy kohdasta: " << found << endl;
	}
	else
	{
		cout << "Ketjua ei löydy" << endl;
	}

	return 0;

}