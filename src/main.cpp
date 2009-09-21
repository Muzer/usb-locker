#include <iostream>
#include <cstdlib>

using namespace std;

int array_find(char* array[], int length, string target)
{
    int flag = -1;
    int i;
    for (i = 0; i < length; i++)
    {
	if (target.compare(array[i]) == 0)
        {
	    flag = i;
	}
    }
    return flag;
}

void print_help()
{
    cout << "USB Locker is a simple program to lock a memory stick so no-one can use it without your permission." << endl;
    cout << "By default USB Locker will start a gui, but you can change that." << endl;
    cout << "-h      Display help" << endl;
    cout << "-g      With gui" << endl;
    cout << "-n      No gui" << endl;
}

int main(int argc, char* argv[])
{
    if (array_find(argv, argc, "-h") != -1)
    {
	print_help();
	exit(0);
    }
    bool use_gui = true;
    if (array_find(argv, argc, "-n") != -1)
    {
	use_gui = false;
    }
    /*
    USBLocker locker;
    locker.set_use_gui(use_gui);
    locker.run();
     */
    return 0; //locker.get_error_no();
}
