//Mari M�ilasalo
// MyGrep teht�v�

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "fi_FI");
	string inputString;
	string searchString;

	//kysyt��n sy�tett�
	cout << "Sy�t� ketju: ";
	getline(cin, inputString);

	//kysy mit� etsit��n
	cout << "Sy�t� etsitt�v� ketju: ";
	getline(cin, searchString);

	//etsit��n ketjusta
	size_t found = inputString.find(searchString);
	if (found != string::npos)
	{
		cout << "Ketju l�ytyy kohdasta: " << found << endl;
	}
	else
	{
		cout << "Ketjua ei l�ydy" << endl;
	}

	return 0;

}