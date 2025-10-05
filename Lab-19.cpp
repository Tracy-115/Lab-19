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

struct Review{
    float rating; 
    string comment;
    Review *next;
};

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
    void Review(float raitng, string &comment){
            Review *newNode = new Review;
            newNode->rating = rating;
            newNode->comment = comment;
            newNode -> next = head;
            head = newNode;
    }
    void output( ){ 
      int count = 0;
        float total = 0;
        Review *temp = head;

        while (temp) {
            cout << "    > Review #" << ++count << ": " << temp->rating << ": " << temp->comment << endl;
            total += temp->rating;
            temp = temp->next;
        }
        if (count > 0){
            cout << "    > Average: " << total / count << endl;
        }
        void deleteReview(Movie *&head){//this is to delete the review
          while (head){
            Movie *temp=head;
            head = head->next;
            delete temp;
      }
      head = nullptr;
    }
};
float random(){
    int r = rant()%41+10;
    return r/10.0f;
}

int main(){
    srand(time(0));
    vector<Movie> movies;
    //these are the four movies I chose
    movies.emplace_back("My little pony");
    movies.emplace_back("Sofia the First");
    movies.emplace_back("Titanic");
    movies.emplace_back("The Notebook");

    ifstream file("review.txt");

    if (!file) {
        cerr << "Could not open Array_File.txt\n";
        return 1;
    }
    vector<string> comments;
    string line;
    while (getline(file, line)) {
        if (line.empty())
            comments.push_back(line);
    }
    file.close();

    int num = 0;
    for (suto &movie:movies){
        for (int i=0; i<3 && num<(int)comment.size(); i++){
            float rating = random();
        movie.Review(rating, comments[num]);
        num++;
        }
    }
    for const auto &movie : movies){
        movie.Review();
        }
        return 0;
    }

    








