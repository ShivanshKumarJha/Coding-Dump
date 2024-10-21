#include<bits/stdc++.h>
using namespace std;
class Movie{
    private:
    string name;
    string rating;
    int watched;

    public:
    Movie(string name,string rating,int watched)
        :name{name},rating{rating},watched{watched}{};
    
    Movie(const Movie &source)
        :Movie{source.name,source.rating,source.watched}{}

    void set_name(string name){this->name=name;}
    string get_name() constwz{return name;}

    void set_rating(string rating){this->rating=rating;}
    string get_rating() const{return rating;}

    void set_watched(int watched){this->watched=watched;}
    int get_watched() const{return watched;}

    void increament_watched(){++watched;}

    void display() const{
        cout<<name<<" "<<rating<<" "<<watched<<endl;
    }
};




class Movies{
    private:
    vector<Movie> movies;

    public:
    bool add_movie(string name,string rating,int watched){
        for(const Movie &movie:movies){
            if(movie.get_name()==name){
                return false;
            }
        }
        Movie temp(name,rating,watched);
        movies.push_back(temp);
        return true;
    }


    bool increament_watched(string name){
        for(Movie &movie:movies){
            if(movie.get_name()==name){
                movie.increament_watched();
                return true;
            }
        }
        return false;
    }


    void display() const{
        if(movies.size()==0){
            cout<<"Sorry,No movies to display\n"<<endl;
        }
        else{
            cout<<"\n==================================="<<endl;
            for(const auto &movie:movies){
                movie.display();
            }
            cout<<"\n==================================="<<endl;
        }
    }
};




void increament_watched(Movies &movies,string name){
    if(movies.increament_watched(name)){
        cout<<name<<" watch increamented "<<endl;
    }
    else{
        cout<<name<<" not found "<<endl;
    }
}


void add_movie(Movies &movies,string name,string rating,int watched){
    if(movies.add_movie(name,rating,watched)){
        cout<<name<<" added "<<endl;
    }
    else{
        cout<<name<<" already exists "<<endl;
    }
}
int main(){
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Big", "PG-13",2);     
    add_movie(my_movies,"Star Wars", "PG",5); 
    add_movie(my_movies,"Cinderella", "PG",7);
     
    my_movies.display();   
    
    add_movie(my_movies,"Cinderella", "PG",7);            
    add_movie(my_movies,"Ice Age", "PG",12);  
 
    my_movies.display();    
    
    increament_watched(my_movies,"Big");        
    increament_watched(my_movies,"Ice Age");  
    
    my_movies.display();    
    
    increament_watched(my_movies,"XXX");       
    return 0;
}