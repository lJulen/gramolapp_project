//
//  songClass.hpp
//  gramolApp
//
//  Created by Julen Garro Olkotz on 6/11/21.
//

#ifndef songClass_hpp
#define songClass_hpp

#include <stdio.h>
#include <ctime>
#include <iostream>
using namespace std;

class Song
{
    public:
    Song(string,float,time_t,string,int);
    
    //Establezco los setters
    void setNameSong(string);
    void setDurationSong(float);
    void setIncorporationDate(time_t);
    void setUrlSong(string);
    void setScore(int);
    
    //Establezco los getters
    string getNameSong();
    float getDurationSong();
    time_t getIncorporationDate();
    string getUrlSong();
    int getScore();
    
    private:
    //string idSong;
    string nameSong;
    //string idAutor;
    float durationSong;
    time_t incorporationDate;
    string urlSong;
    int score;
};
#endif /* songClass_hpp */
