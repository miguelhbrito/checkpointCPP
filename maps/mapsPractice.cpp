#include <iostream>
#include <map>

using namespace std;

int main() {
    map < char, int > mymap;

    mymap['b'] = 100;
    mymap['a'] = 200;
    mymap['c'] = 300;

    cout << "showing mymap" << endl;
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
        cout << it -> first << " => " << it -> second << '\n';

    map < char, int > mymap2;

    // first insert function version (single parameter):
    mymap2.insert(std::pair < char, int > ('a', 100));
    mymap2.insert(std::pair < char, int > ('z', 200));

    pair < map < char, int > ::iterator, bool > ret;
    ret = mymap2.insert(pair < char, int > ('z', 500));
    if (ret.second == false) {
        cout << "element 'z' already existed";
        cout << " with a value of " << ret.first -> second << endl;
    }

    // second insert function version (with hint position):
    map < char, int > ::iterator it = mymap.begin();
    mymap2.insert(it, pair < char, int > ('b', 300)); // max efficiency inserting
    mymap2.insert(it, pair < char, int > ('c', 400)); // no max efficiency inserting

    // third insert function version (range insertion):
    map < char, int > anothermap;
    anothermap.insert(mymap.begin(), mymap.find('c'));

    cout << "mymap2 contains:" << endl;
    for (auto it = mymap2.begin(); it != mymap2.end(); ++it)
        cout << it -> first << " => " << it -> second << endl;

    cout << "anothermap contains:" << endl;
    for (auto it = anothermap.begin(); it != anothermap.end(); ++it)
        cout << it -> first << " => " << it -> second << endl;

    map < char, int > foo, bar;

    foo['x'] = 100;
    foo['y'] = 200;

    bar['a'] = 11;
    bar['b'] = 22;
    bar['c'] = 33;

    foo.swap(bar);

    cout << "foo contains:" << endl;
    for (map<char,int>::iterator it = foo.begin(); it != foo.end(); ++it)
        cout << it -> first << " => " << it -> second << endl;

    cout << "bar contains:" << endl;
    for (map<char,int>::iterator it = bar.begin(); it != bar.end(); ++it)
        cout << it -> first << " => " << it -> second << endl;

    map < char, int > mymap3;
    map < char, int > ::iterator it3;

    mymap3['a'] = 50;
    mymap3['b'] = 100;
    mymap3['c'] = 150;
    mymap3['d'] = 200;

    it3 = mymap3.find('b');
    if (it3 != mymap3.end())
        mymap3.erase(it3);

    cout << "elements in mymap3:" << endl;
    cout << "a => " << mymap3.find('a') -> second << endl;
    cout << "c => " << mymap3.find('c') -> second << endl;
    cout << "d => " << mymap3.find('d') -> second << endl;

    map < char, int > mymap4;
    map < char, int > ::iterator it4;

    mymap4['a'] = 10;
    mymap4['b'] = 20;
    mymap4['c'] = 30;
    mymap4['d'] = 40;
    mymap4['e'] = 50;
    mymap4['f'] = 60;

    it4 = mymap4.find('b');
    mymap4.erase(it4); // erasing by iterator

    mymap4.erase('c'); // erasing by key

    it4 = mymap4.find('e');
    mymap4.erase(it4, mymap4.end()); // erasing by range
    
    cout<<"mymap 4 erase some itens:"<<endl;
    for (it4 = mymap4.begin(); it4 != mymap4.end(); ++it4)
        cout << it4 -> first << " => " << it4 -> second << endl;
    
    return 0;
}
