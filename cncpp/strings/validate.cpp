#include <iostream>
using namespace std;

int validate(char *name);

int main() 
{
    char name[] = "Iwantedto+buy";

    if (validate(name))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}

int validate(char *name)
{
    int i;
    
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 'A' && name[i] <= 'Z') 
            && !(name[i] >= 'a' && name[i] <= 'z') 
            && !(name[i] >= '0' && name[i] <= '9'))
        {
            return 0;
        }
    }
    return 1;
}