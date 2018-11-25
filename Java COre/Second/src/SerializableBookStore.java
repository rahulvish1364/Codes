import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.*;

class Book implements Serializable{
	int id;
	String BookName;
	String Author;
	int BookPrice;
	
	public Book(int id, String name , String Author, int price) {
		// TODO Auto-generated constructor stub
		
		this.id= id;
		this.BookName= name;
		this.Author= Author;
		this.BookPrice= price;
		
	}
	
	@Override
	public String toString() {
		
		return String.format("Id is %d\nName is %s\nAuthor is %s\nPrice is %d", this.id, this.BookName, this.Author, this.BookPrice);
	}
}

interface IBookstore extends Iterable<Book>, Serializable {
	void addNewBook(Book bk);
	void deleteBook(int id);
	void updateBook(Book bk) throws Exception;
	List<Book> getAllBooks();
	int count();
}



class SerialBookRepo implements IBookstore{

	
	BookRepository store = new BookRepository();
	private static String file = "BOOKRepo.ser";
	
	@Override
	public Iterator<Book> iterator() {
		// TODO Auto-generated method stub
		return store.iterator();
	}

	@Override
	public void addNewBook(Book bk) {
		// TODO Auto-generated method stub
		store.addNewBook(bk);
		saveData();
	}

	@Override
	public void deleteBook(int id) {
		// TODO Auto-generated method stub
		store.deleteBook(id);
		saveData();
	}

	@Override
	public void updateBook(Book bk) throws Exception {
		// TODO Auto-generated method stub
		store.updateBook(bk);
		saveData();
	}

	@Override
	public List<Book> getAllBooks() {
		// TODO Auto-generated method stub
		loadData();
		return store.getAllBooks();
	}

	@Override
	public int count() {
		// TODO Auto-generated method stub
		return 0;
	}
	
	private void saveData() {
		try {
			FileOutputStream fs = new FileOutputStream(file);
			ObjectOutputStream os = new ObjectOutputStream(fs);
			os.writeObject(store);
			fs.close();
			os.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	private  void loadData() {
		try {
			FileInputStream fs = new FileInputStream(file);
			ObjectInputStream os = new ObjectInputStream(fs);
			store = (BookRepository)os.readObject();
			fs.close();
			os.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
}

class BookRepository implements IBookstore, Serializable{
	  private List<Book> _Books = new ArrayList<Book>();
	  
		public int count() {
			return _Books.size();
		}
	  @Override
		public Iterator<Book> iterator() {
			return _Books.iterator();//return  the iterator of the _Books to iterate...
		}
		
		@Override
		public void addNewBook(Book bk) {
			_Books.add(bk);
			
		}

		@Override
		public void deleteBook(int id) {
			for(Book bk : _Books) {
				if(bk.id == id) {
					_Books.remove(bk);
					return;//exit the function after the job is done, as the next iteration will throw an Exception....
				}
			}
		}

		@Override
		public void updateBook(Book bk) throws Exception{
			throw new Exception("Not implemented, do it urself....");	
		}

		@Override
		public List<Book> getAllBooks() {
			// TODO Auto-generated method stub
			return _Books;
		}
		
	}

public class SerializableBookStore {
 public static void main(String[] args) {
	customCollection();
}

private static void customCollection() {
	IBookstore store = new SerialBookRepo();
/*	store.addNewBook(new Book(121, "WonderLand", "Alice", 234));
	store.addNewBook(new Book(123, "Geeta", "Valmiki", 450));
	store.addNewBook(new Book(124, "White Tiger ", "Aravind Adiga", 650));
	store.addNewBook(new Book(125, "Satanic Verses", "Mohd Housseni", 234));
	store.addNewBook(new Book(126, "Meluha", "Avish", 231));
*/
	List<Book> books = store.getAllBooks();
	for (Book book : books) {
		System.out.println(book);
		
	}
	
}
	
}
