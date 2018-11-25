package DataLayer;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;

import EntityLayer.Book;

public interface DalInterface {
  void insertNewBook(int id, String name, String author, int price);
  void updateNewBook(int id, String name, String author, int price);
  void deleteBook(int id );
  List<Book> getAllBooks();
 
}

/*class DataLayerComponent implements DalInterface {
	@Override
	public void insertNewBook(int id, String name, String author, int price) {
		String insertQuery ="INSERT INTO bookStore VALUES(?, ?, ?, ?)";
		try {
			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(insertQuery);
			query.setInt(1, id);
			query.setString(2, name);
			query.setString(3, author);
			query.setInt(4, price);
			int rowaff = query.executeUpdate();
			System.out.println("row affected "+rowaff);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public void updateNewBook(int id, String name, String author, int price) {
		String updateQuery ="UPDATE bookStore bookName = ?, bookAuthor=?, price=? WHERE bookId=?";
		try {
			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(updateQuery);
			query.setInt(4, id);
			query.setString(1, name);
			query.setString(2, author);
			query.setInt(3, price);
			int rowaff = query.executeUpdate();
			System.out.println("row affected "+rowaff);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
		
	}

	@Override
	public void deleteBook(int id) {
		String deleteQuery ="DELETE FROM bookStore WHERE bookId=?";
		try {
			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(deleteQuery);
			query.setInt(4, id);
			int rowaff = query.executeUpdate();
			System.out.println("row affected "+rowaff);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
		
		

	@Override
	public List<Book> getAllBooks() {
		String deleteQuery ="DELETE FROM bookStore WHERE bookId=?";
		List<Book> allBooks = new ArrayList<Book>();
			Connection con = getConnection();
			Statement query = con.createStatement();
		     ResultSet list = query.executeQuery("SELECT * FROM bookStore");
	     while(list.next()) {
	      Book book = new Book(list.getInt(1), list.getString(2), list.getString(3) , list.getInt(4));
	    	 allBooks.add(book);
	    	 
		}
	     
	     return allBooks;
	     
	    }
	
	Connection getConnection() throws Exception {
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:myql://localhost/DBPrac", "root", "");
		System.out.println("Connection Succeded");
		return con;
	}
}*/