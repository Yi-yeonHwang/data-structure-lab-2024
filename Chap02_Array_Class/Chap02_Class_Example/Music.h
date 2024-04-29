#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Music class
class Music {
private:
    string title;
    string artist;
    string album;
    int year;
public:
    // 생성자(Constructor)
    Music(string title, string artist, string album, int year) {
        this->title = title;
        this->artist = artist;
        this->album = album;
        this->year = year;
    }
    //소멸자 Destructor
    // Getters
    string getTitle() { return title; }
    string getArtist() { return artist; }
    string getAlbum() { return album; }
    int getYear() { return year; }
};

// MusicStreamingService class
class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList; //stl 사용 클래스를 vector로

public:
    MusicStreamingService(string serviceName) {
        this->serviceName = serviceName;
    }

    // Adds a music to the service
    void addMusic(string title, string artist, string album, int year) {
        Music newMusic(title, artist, album, year);
        musicList.push_back(newMusic); //뒤에 추가
        cout << title << " by " << artist << " added to " << serviceName << endl;
    }

    // Searches for music by title
    Music* searchByTitle(string title) { //* 포인터: 주소를 저장하여 가리킨다. 지시한다.
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {
                return &musicList[i]; // &주소값
            }
        }
        return NULL;
    }

    // Searches for music by artist
    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]); //result 벡터에 더해서 같은 아티스트의 곡을 다 나열
            }
        }
        return result;
    }

};