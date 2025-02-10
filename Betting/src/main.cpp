#include <iostream>
#include <curl/curl.h>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<float> getData(string firstName, string lastName, string option){
    CURL *curl_handle;
    CURLcode res;
    string readBuffer;

    curl_handle = curl_easy_init();
    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.balldontlie.io/v1/players");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        cout << readBuffer << endl;
        //we take in the first and last name
        //
    }
}

int main(int argc, char* argv[]) {
    //first name
    //last name 
    //option
    if(argc < 4){
        cout << "You have entered less than 3 arguments" << endl;
    }

    string firstName = argv[1];
    string lastName = argv[2];
    string option = argv[3];
    string matchup = argv[4];
    return 0;
}