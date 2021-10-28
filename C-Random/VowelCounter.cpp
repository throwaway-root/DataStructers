#include <iostream>

using namespace std;

int vowelCounter(char *sptr)
{
	int count = 0;

	while ((*sptr) != '\0') {

		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
			|| *sptr == 'o' || *sptr == 'u'|| *sptr == 'A'|| *sptr == 'E'||*sptr == 'I'|| *sptr == 'O'|| *sptr == 'U') {

			count++;
		}

		sptr++;
	}

	return count;
}

int main()
{

	char str[30];
    cout<<"Enter the string:";
    fgets(str,30,stdin);
	cout << "Vowels in above string: " << vowelCounter(str);

	return 0;
}
