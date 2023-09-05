#include <iostream>
using namespace std;

// Write Your Function Here

string createurl(string protocoal, string name, string domain, bool www = true)
{
    return protocoal + "://" + (www?"www.":"")  + name + "." + domain;
}
int main()
{
    cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
    return 0;
}