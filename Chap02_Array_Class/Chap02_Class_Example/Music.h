#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {//클래스명
private://멤버변수, 필드
    string title;
    string artist;
    string album;
    int year;

public:
    //생성자(Construntor)
    Music(string title, string artist, string album, int year) { //매개변수 title, artist, album, year
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    //소멸자(Destructor
    ~Music() {}

    // Getters
    string getTitle() { return title; }//멤버함수, 메소드
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() { return year; }
};

// MusicStreamingService class
class MusicStreamingService {//클래스명
private:
    string serviceName;//멤버변수, 필드
    vector<Music> musicList;

public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year);
        musicList.push_back(newMusic);
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) {
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {
                return &musicList[i]; //포인터: 주소 저장
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]);
            }
        }
        return result;
    }

};
#pragma once
