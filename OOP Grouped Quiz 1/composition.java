import java.util;
import java.util.ArrayList;
import java.util.List;
class Book {
    public String title;
    public String genre;
    Book(String title, String genre){
        this.title= title;
        this.genre= genre;
    }   
}

class library{
    private List<Book> books;
    library(List<Book> books){
        this. books= books;

    }
    public List<Book> getListOfBooksInlibrary(){
        return books;

    }
}
class composition{
    public static void main(String[] args) {
        Book b1= new Book("HOUSE OF LEAVES","HORROR");
        Book b2= new Book("SNOW CRASH","SCIENCE FICTION");
        Book b3= new Book("HARRY POTTER","FANTASY FICTION");
        List<Book> book= new ArrayList<Book>();
        book.add(b1);
        book.add(b2);
        book.add(b3);
        library Library= new library(book);
        List<Book> books = Library.getListOfBooksInlibrary();
        for (Book bk: books){
            System.out.println("Title: " + bk.title +" " +"and" +" " +"Genre: " + bk.genre);
        }   
    }
}    
    


    
    
