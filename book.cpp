#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
#include "author.cpp"
#include "article.cpp"
#include "chapter.cpp"
#include<vector>
class Book{
    private:
        std::string title;
        Author author;
        int publicationYear;
        std::vector<Chapter> chapters;
    public:
        Book()
        : title(""), author(Author()), publicationYear(0),chapters(0){};
        Book(std::string bookTitle, Author bookAuthor, int year,std::vector<Chapter> &bookChapter)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapter){};
        void addChapter(Chapter &chapter){
            chapters.push_back(chapter);
        }
        std::string getTitle(){
            return title;
        }
        Author getAuthor(){
            return author;
        }
        int getPublicationYear(){
            return publicationYear;
        }
        std::vector<Chapter> getChapters(){
            return chapters;
        }
        void displayInfo(){
            std::cout<< "mosteekk";
        }
};
#endif