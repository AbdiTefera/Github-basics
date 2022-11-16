#include <string>
#include <vector>
#include <cstdio>

int main(void) {

    std::string largeString = "Some string with substrings";
    std::string mySubString = "string";
    
    int numSubStrings = 0;
    std::vector<size_t> locations;
    
    size_t found = 0;

    while(true) {
        found = largeString.find(mySubString, found+1);
        if (found != std::string::npos) {
            numSubStrings += 1;
            locations.push_back(found);
        }

        else {
            break; // there are no more matches
        }
    }

    printf("There are %d occurences of: \n%s \nin \n%s\n", numSubStrings, mySubString.c_str(), largeString.c_str());
}