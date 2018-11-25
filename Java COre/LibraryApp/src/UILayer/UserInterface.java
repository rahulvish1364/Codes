package UILayer;

import java.io.*;
import java.util.ArrayList;
import java.util.List;

import BusinessLayer.BLInterface;
import BusinessLayer.BussinessComponent;
import EntityLayer.Book;

public class UserInterface {

	public static void main(String[] args) {
	  String file = readFile(args[0]);
	  boolean processing = true;
	  do {
		 String choice = Input.getString(file);
		  processing = processingMenu(choice);
	} while (processing);
	  
	  
	}

	private static boolean processingMenu(String choice) {
		switch (choice) {
		case "1":
			displayRecords();
			break;
		case "2":
			addRecord();
			break;
		case "3":
			deleteRecord();
			break;
		case "4":
			updateRecords();
			break;
		case "5":
			dispTitles();
			break;
		case "6":
			dispAuthor();
			break;
		default:
			return false;
		}
		return true;
	}

	private static void updateRecords() {
		BLInterface blobj = new BussinessComponent();
		int id = Input.getInt("Enter the Id of book");
		String name = Input.getString("Enter the name of book");
		String author = Input.getString("Enter the name of author");
		int price= Input.getInt("Enter the price of the book");
		try {
			blobj.updateBook(new Book(id, name, author, price));
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	

	private static void deleteRecord() {
		
		BLInterface blobj = new BussinessComponent();
		int id = Input.getInt("Enter the Id to delete");
		try {
			blobj.delteBook(id);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	private static void addRecord() {
		BLInterface blobj = new BussinessComponent();
		int id = Input.getInt("Enter the Id of book");
		String name = Input.getString("Enter the name of book");
		String author = Input.getString("Enter the name of author");
		int price= Input.getInt("Enter the price of the book");
		try {
			blobj.addBook(new Book(id, name, author, price));
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	} 

	private static void displayRecords() {
		BLInterface blobj = new BussinessComponent();
		List<Book> allbooks=blobj.getAllBook();
		for(Book bk : allbooks) {
			System.out.println(bk);
		}
	}

	private static String readFile(String string) {
		StringBuilder builder = new StringBuilder();
		
		try {
			FileReader reader = new FileReader(string);
			int i=0;
			while((i=reader.read()) != -1) {
				builder.append((char)i);
			}
			reader.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return builder.toString() ;
	}
	
	private static void dispTitles() {
		BLInterface blobj = new BussinessComponent();
		List<Book> book = blobj.getBookByTitle(Input.getString("Enter title to search"));
		for (Book bk : book) {
			System.out.println(bk);
		}
	}
		private static void dispAuthor() {
			BLInterface blobj = new BussinessComponent();
			List<Book> book = blobj.getBookByTitle(Input.getString("Enter Author to search"));
			for (Book bk : book) {
				System.out.println(bk);
			}
	
		}
}

class Input{
	static String getString(String message) {
	=	String input="";
		System.out.println(message);
		InputStreamReader reader = new InputStreamReader(System.in);
		BufferedReader kb = new BufferedReader(reader);
		try {
			input = kb.readLine();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		
		 
		return input;
		}
	 static int getInt(String Question) {
		 return Integer.parseInt(getString(Question));
		 
	 }
}
