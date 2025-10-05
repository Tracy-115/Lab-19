// COMSC-210 | Lab 19 | Kyawt Thinzar Min
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

class Movie{
private:
    string title;
    Review *head;
public: 
    Movie(string t) : title(t), head(nullptr) {}
    ~Movie() {
        while (head) {
            Review *temp = head;
            head = head->next;
            delete temp;
        }
    }

int main(){
    vector<Movie> movies;
    ifstream file("Array_File.txt");

    if (!file) {
        cerr << "Could not open Array_File.txt\n";
        return 1;
    }

    








