#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie{
    private:
        string title;
        double rating;
    public:
        Movie(string t = "", double r = 0.0){
            title = t;
            rating = r;
        }
        void print_movie(){
            cout << title << ":" << rating << endl;
        }
};

int main(){
    vector<Movie> movies;

    movies.push_back(Movie("titinic", 9.9));
    movies.push_back(Movie("인어공주", 7.5));
    
    for(auto& e : movies){
        e.print_movie();
    }

    return 0;
}