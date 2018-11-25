package BusinessLayer;

import java.util.ArrayList;
import java.util.List;

import DataLayer.DalComponent;
import DataLayer.DalInterface;
import EntityLayer.Book;

public class BussinessComponent implements BLInterface {
  DalInterface  dalObj = new  DalComponent();
	public void addBook(Book book)  {
	
		if(book==null) {
		}
		dalObj.insertNewBook(book.getId(), book.getName(), book.getAuthor(), book.getPrice());
		
		
	}

	@Override
	public void updateBook(Book book) {
	
		if(book==null) {
	
			}
			dalObj.updateNewBook(book.getId(), book.getName(), book.getAuthor(), book.getPrice());
			
	}

	@Override
	public void delteBook(int id) {
		dalObj.deleteBook(id);
		
	}

	@Override
	public List<Book> getAllBook() {
	 return dalObj.getAllBooks();
	}

	@Override
	public List<Book> getBookByTitle(String title) {
		List<Book> books = dalObj.getAllBooks();
		List<Book> onlytitle =new ArrayList<Book>();
		for (Book book : books) {
			if(book.getName().contains(title));
			onlytitle.add(book);
		}
		return onlytitle;
	}

	@Override
	public List<Book> getBookByAuthor(String author) {
		List<Book> books = dalObj.getAllBooks();
		List<Book> onlyauthor =new ArrayList<Book>();
		for (Book book : books) {
			if(book.getName().contains(author));
			onlyauthor.add(book);
		}
		return onlyauthor;
	}

}
