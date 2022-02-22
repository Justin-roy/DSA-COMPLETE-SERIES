#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter Any Alphabet: ";
    cin>>c;
    // if user hit Capital char
    c = tolower(c);
    switch (c)
    {
    case 'a': cout<<"Vowel\n";
        break;
    case 'e': cout<<"Vowel\n";
        break;
    case 'i': cout<<"Vowel\n";
        break;
    case 'o': cout<<"Vowel\n";
        break;
    case 'u': cout<<"Vowel\n";
        break;
    default: cout<<"Consonant\n";
        break;
    }

return 0;
}
