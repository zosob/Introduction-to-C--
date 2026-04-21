#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// -------------------------------------------------------
// Agency Record — stores one code word
// -------------------------------------------------------
class AgentRecord {
private:
    string* codeWord;   // heap allocated

public:
    AgentRecord() {
        codeWord = new string("CLASSIFIED");
    }

    AgentRecord(string word) {
        codeWord = new string(word);
    }

    // LOGIC BOMB 1 is somewhere in this class
    AgentRecord(const AgentRecord& other) {
        codeWord = new string(*other.codeWord);   // ← sabotaged
    }

    ~AgentRecord() {
        delete[] codeWord;
        codeWord = nullptr;
    }

    string getWord() const {
        return *codeWord;
    }

    void setWord(string word) {
        *codeWord = word;
    }
};

// -------------------------------------------------------
// FileVault — reads records from the secret file
// -------------------------------------------------------
class FileVault {
private:
    AgentRecord* records;
    int          size;
    int          capacity;

public:
    FileVault() {
        capacity = 2;
        size     = 0;
        records  = new AgentRecord[capacity];
    }

    ~FileVault() {
        delete[] records;    // ← LOGIC BOMB 2 is on this line
        records = nullptr;
    }

    void grow() {
        capacity *= 2;
        AgentRecord* newArr = new AgentRecord[capacity];
        for (int i = 0; i < size; ++i)
            newArr[i] = records[i];
        delete[] records;
        records = newArr;
    }

    void add(AgentRecord r) {
        if (size == capacity) grow();
        records[size] = r;
        ++size;
    }

    void loadFromFile(const string& filename) {
        ifstream inFile;
        inFile.open(filename);

        // LOGIC BOMB 3 is somewhere in this function
        int count;
        inFile >> count;

        if (!inFile) {
            cout << "[ERROR] Could not open file: " << filename << endl;
            return;
        }
        for (int i = 0; i < count; ++i) {
            string word;
            inFile >> word;
            AgentRecord r(word);
            add(r);
        }

        inFile.close();
    }

    void decodeAndPrint() const {
        cout << "\n=== DECRYPTED TRANSMISSION ===" << endl;
        cout << "SECRET CODE: ";
        for (int i = 0; i < size; ++i) {
            cout << records[i].getWord()[0];  // first letter of each word
        }
        cout << endl;
        cout << "==============================" << endl;
    }
};

// -------------------------------------------------------
// main
// -------------------------------------------------------
int main() {
    FileVault vault;
    vault.loadFromFile("C:/Users/ck8758cn.e/OneDrive - Minnesota State/Documents/Semesters/Spring 2026/CSCI 201 1 2 3/Introduction to C++/Week 14/secret.txt");
    vault.decodeAndPrint();
    return 0;
}