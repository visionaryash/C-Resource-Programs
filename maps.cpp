#include <iostream>
#include <algorithm>
#include <string>
#include <map>

// map - key value pair
using namespace std;
   

int main() {
    
    map<string, string> languages;
    languages["py"] = "python";
    languages["cpp"] = "c plus plus";
    languages["js"] = "javascript";
    languages["rb"] = "Ruby";
    languages["rb"] = "Ruby-one";
    
    languages.insert(make_pair("pl", "Perl"));
    languages.insert(make_pair("ja","java" ));
    
    for (auto &val : languages) {
        cout << val.first << " : " <<val.second<< endl;
    }
    
    return 0;
}