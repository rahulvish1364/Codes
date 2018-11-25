package DataLayer;

import java.util.*;

import EntityLayer.Book;

import java.sql.*;

//import EntityLayer.Book;

public class DalComponent implements DalInterface {
	String url = "jdbc:mysql://localhost/dbprac";
	String user= "root";
	String pwd="";

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
		String updateQuery ="UPDATE bookStore set bookName = ?, bookAuthor=?, price=? WHERE bookId=?";
		try {
			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(updateQuery);
			query.setString(1, name);
			query.setString(2, author);
			query.setInt(3, price);
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
	public void deleteBook(int id) {
		String deleteQuery ="DELETE FROM bookstore WHERE bookId=?";
		try {
			Connection con = getConnection();
			PreparedStatement query = con.prepareStatement(deleteQuery);
			query.setInt(1, id);
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
		List<Book> allBooks = new ArrayList<Book>();
			
			try {
				Connection con = getConnection();
				Statement query = con.createStatement();
				ResultSet list = query.executeQuery("SELECT * FROM bookstore");
				 while(list.next()) {
				  Book book = new Book(list.getInt(1), list.getString(2), list.getString(3) , list.getInt(4));
				    allBooks.add(book);
				 }
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
	     
	    	 
			return allBooks;
		}
	     

	Connection getConnection() throws Exception {
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection(url, user, pwd);
		System.out.println("Connection Succeded");
		return con;
	}

	
}
