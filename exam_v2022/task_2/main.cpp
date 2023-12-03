#include <iostream>
#include <vector>
#include <memory>
#include "models/ProgrammingLanguage.h"
#include "models/Cpp.h"
#include "models/Rust.h"
#include "models/Cargo.h"
#include "models/CMake.h"
#include "models/Meson.h"
using namespace std; 


int main() 
{
    /* TASK A old
    vector<unique_ptr<ProgrammingLanguage>> programming_languages;
        // Uncommenting the following line should cause compilation error:
        // programming_languages.emplace_back(make_unique<ProgrammingLanguage>
        //());
    programming_languages.emplace_back(make_unique<Cpp>());
    programming_languages.emplace_back(make_unique<Rust>());
    for (auto &programming_language : programming_languages) {
        cout << programming_language->print_line("Hello World") << endl;
        cout << programming_language->for_each("e", "vec") << endl
        << endl;
    }

    */

    vector<unique_ptr<ProgrammingLanguage>> programming_languages;
    programming_languages.emplace_back(make_unique<Cpp>(make_unique<CMake>
    ()));
    programming_languages.emplace_back(make_unique<Cpp>(make_unique<Meson>
    ()));
    programming_languages.emplace_back(make_unique<Rust>
    (make_unique<Cargo>()));
    for (auto &programming_language : programming_languages) {
    cout << programming_language->build() << endl;
    }

    return 0;
};