//På grunn av meget små klassedeklarasjoner valgte jeg å bruke kun en fil: 
//Løsningen antar at Map og Filter er egne klasser
//Videre har | operatoren flere overloads for å ta hensyn til at det skal
//være mulig å bruke | operatoren mellom henholdsvis en vektor og et Map-objekt
//, eller mellom en vektor og et objekt av Filter

#include <iostream>
#include <memory>
#include <functional>
#include <vector>
using namespace std; 

class Map {
public:
  function<int(int)> mapper;

  Map(function<int(int)> mapper_) : mapper(mapper_) {}
};

class Filter {
public:
  function<bool(int)> filter;

  Filter(function<bool(int)> filter_) : filter(filter_) {}
};


vector<int> operator|(const vector<int> &vect, Map map_obj);

vector<int> operator|(const vector<int> &vect, Filter filter_obj);


ostream &operator<<(ostream &out, const vector<int> vect);

int main() 

{
    vector<int> vec = {1, 2, 3};

    cout << (vec | Map([](int e) { return e * 2; })) << endl;
    cout << (vec | Map([](int e) { return e * 3; })) << endl;

    cout << (vec | Filter([](int e) { return e % 2 == 0; })) << endl;
    cout << (vec | Filter([](int e) { return e % 2 == 1; })) << endl;

 
 
    return 0;
}

vector<int> operator|(const vector<int> &vect, Map map_obj)
{
    vector<int> result;

    for (auto &e : vect)
    {
        result.push_back(map_obj.mapper(e));
    }

    return result;
}

vector<int> operator|(const vector<int> &vect, Filter filter_obj)
{
    vector<int> result;

    for (auto &e : vect)
    {
        if (filter_obj.filter(e))
        {
            result.push_back(e);
        }
    }

    return result;
}

ostream &operator<<(ostream &out, const vector<int> vect) 
{
    out << "{";

    for (size_t i = 0; i < vect.size(); ++i)
    {
        if (i != vect.size() - 1)
        {
            out << vect[i] << ", ";
        }
        else {
            out << vect[i];
        }
    }

    out << "}";

  return out;
}