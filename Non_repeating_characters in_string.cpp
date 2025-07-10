#include<bits/stdc++.h>
using namespace std;


void findNonRepeating(const string input){
    map<char, int> count;
    set<char> nonrepeating;

    for(int i = 0; i < input.length(); i++){
        char c = input[i];
        count[c] ++;
    } // This block counts each frequency of character in string

    for(auto i = count.begin(); i != count.end(); i ++){
        char charecter = i -> first;
        int freq = i -> second;

        if(freq == 1){
            nonrepeating.insert(character);
        }
    } // This block goes through pair in map and checks if character occured only once and if it did it adds to set of nonrepeating.

    for(!nonrepeating.empty()){
        cout << "Non Repeating characters : ";
        for(auto i = nonrepeating.begin(); i != nonrepeating.end(); i ++){
            cout << *i << " " << endl;
        }
    }
}


int main(){
    string str = "Blueberry";

    findNonRepeating(str);

return 0;
}
