#ifndef ARTICLE
#define ARTICLE 
#include <string>
#include <iostream>
#include "author.cpp"
using namespace std;

class Article
{
    private:
        string title;
        Author author;
        int publicationYear;
        string journal;
    
    public:
        Article():title(),author(Author()),publicationYear(0),journal(""){};
        Article (string articleTitle, Author& articleAuthor, int year, string journalName):
        title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {};
        Article(Article &other):title(other.title),author(other.author),publicationYear(other.publicationYear),journal(other.journal){};
    
    void displayInfo(){
        cout << "Article Title: " << title << endl;
        cout << "Author: " << author.toString() << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Journal: " << journal << endl;
    }

    string getTitle() const {
        return title;
    }

    Author getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    string getJournal() const {
        return journal;
    }
};
#endif