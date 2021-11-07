//
//  songClass.cpp
//  gramolApp
//
//  Created by Julen Garro Olkotz on 6/11/21.
//

#include "songClass.hpp"
#include <iostream>
#include <ctime>
using namespace std;

/*
void Song::setIDSong()
{
    idSong = 1; //Aquí tengo que generar uno random o coger de la bbdd
}
string getIDSong()
{
    return idSong;
}
*/

Song::Song(string aNameSong,float aDurationSong,time_t aIncorporationDate,string aUrlSong,int aScore)
{
    setNameSong(aNameSong);
    setDurationSong(aDurationSong);
    setIncorporationDate(aIncorporationDate);
    setUrlSong(aUrlSong);
    setScore(aScore);
}

//Getter y setter del nameSong
void Song::setNameSong(string aNameSong)
{
    nameSong = aNameSong;
}
string Song::getNameSong()
{
    return nameSong;
}

/*
//Getter y setter del IDAutor (igual hay que quitarlo)
void setIDAutor()
{
    idAutor = 1; //Aquí tengo que generar uno random o coger de la bbdd
}
string getIDAutor()
{
    return idAutor;
}
*/
//Getter y setter del duration Song
void Song::setDurationSong(float aDuration)
{
    durationSong = aDuration;
}
float Song::getDurationSong()
{
    return durationSong;
}

//Getter y setter del incorporationDate
void Song::setIncorporationDate(time_t aIncorportationDate)
{
    incorporationDate = aIncorportationDate;
}
time_t Song::getIncorporationDate()
{
    return incorporationDate;
}

//Getter y setter del urlSong
void Song::setUrlSong(string aUrlSong)
{
    urlSong = aUrlSong;
}
string Song::getUrlSong()
{
    return urlSong;
}

//Getter y setter del nameSong
void Song::setScore(int aScore)
{
    score = aScore;
}
int Song::getScore()
{
    return score;
}

