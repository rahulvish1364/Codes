package EntityLayer;

public class Book {
	
	int bookId;
	String bookName;
	String bookAuthor;
	int price;
	
  public Book(int id, String name, String author, int price) {
   this.bookId=id;
   this.bookName=name;
   this.bookAuthor=author;
   this.price=price;
}
  
   public int getId() {
	  return this.bookId;
	  
  }
  public String getName() {
	  return this.bookName;
  }
  
  public String getAuthor() {
	  return this.bookAuthor;
  }
  
  public int getPrice() {
	  return this.price;
  }
  @Override
  public String toString() {
		return String.format("Id:%d Name: %s Author: %s Price: %d", this.bookId, this.bookName, this.bookAuthor, this.price);
	}

}

