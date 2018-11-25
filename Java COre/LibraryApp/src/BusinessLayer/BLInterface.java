package BusinessLayer;

import EntityLayer.Book;
import java.util.*;

public interface BLInterface {
 
	void addBook(Book book) throws Exception;
	void updateBook(Book book) throws Exception;
	void delteBook(int id);
    List<Book> getAllBook();
    List<Book> getBookByTitle(String title);
    List<Book> getBookByAuthor(String author);
	
}
