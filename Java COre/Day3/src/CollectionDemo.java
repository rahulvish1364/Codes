import java.util.*;


enum Criteria{
	Name,
	Address,
	Id,
}

class empComparer implements Comparator<employee>{
   Criteria condition;
   
	
   public empComparer(Criteria condition) {
	// TODO Auto-generated constructor stub
	   this.condition=condition;
	   
}
   
   
   @Override
	public int compare(employee first, employee second) {
	  
	   switch (this.condition) {
	case Name:
		return first.name.compareTo(second.name);
	case Address:
		return first.address.compareTo(second.address);
	case Id:
		return first.compareTo(second);
	default:	
		return 0;
	}
		
	}
	
}

class employee implements Comparable<employee>{
	String name;
	String address;
	int id;
	int salary;
	
	public employee(int id, String name, String add,  int salary) {
		// TODO Auto-generated constructor stub
		this.name= name;
		this.address=add;
		this.id= id;
		this.salary=salary;
	}
	@Override
	public int hashCode() { // changing the hash code of the object to the hash code of the id of employee 
		// by overriding the hashcode method which is implicilty called when the object is created 
		return Integer.hashCode(this.id);
	}
	@Override
	public boolean equals(Object obj) {
		employee other = (employee)obj;
		return this.id == other.id;
	}
	@Override
	public String toString() {
		return String.format("The name is %s with id %d and address %s", this.name, this.id, this.address);
	}
	@Override
	public int compareTo(employee other) {
		if(other.id>this.id)
			return -1;
		else if(other.id<this.id)
			return 1;
		else
			return 0;
	}
}
		
		

public class CollectionDemo {
 public static void main(String[] args) {
	
	// ArrayList();
	 //setExample();
	 //uniqueData();
	 //IteratorExample();
     sortinguniqueData();
 }

 
 private static void setExample() {
		//Set allows to store only unique data in it....
		HashSet<String> fruits = new HashSet<String>();
		fruits.add("Apple");
		fruits.add("Mango");
		fruits.add("Orange");
		fruits.add("PineApple");
		fruits.add("Banana");
		if(fruits.add("Papaya")) {
			System.out.println("Added");
		}else
			System.out.println("Duplicates are not allowed");
		
		System.out.println("The no of items in our cart is " + fruits.size());
		
		for(String item : fruits)
			System.out.println(item);
 }
 
 public static void ArrayList() {
	List <Integer>values = new ArrayList<Integer>();
	
	for (int i = 34; i < 67 ; i++) {
		values.add(i);
	}
	
   for (Integer i : values) {
	System.out.println(i);
	
	
}	
 }
 
 public static void IteratorExample() {
	 HashSet<String> fruits = new HashSet<>();
	 fruits.add("Avacardo");
	 fruits.add("Plum");
	 fruits.add("Cherry");
	 fruits.add("Kiwi");
	 fruits.add("Raspberry");
	 System.out.println(fruits.size());
	 for (String string : fruits) {
		System.out.println(string);
	}
	 Iterator<String> iter = fruits.iterator();
	 int c =0;
	 while(iter.hasNext()) {
		 System.out.println(iter.next());
	 }
	 System.err.println(c);
 }
 
 public static void sortinguniqueData() {
	 List<employee> emp  = new ArrayList<employee>();
	 emp.add(new employee(1, "Rahul", "Agra", 12231));
	 emp.add(new employee(2, "Rishi", "Varanasi", 231231));
	 emp.add(new employee(3, "Rakesh", "Bhopal", 231231));
	 emp.add(new employee(4, "Ravi", "Delhi", 2312312));
	 emp.add(new employee(5, "Rashi", "Vapi", 23123));
	 
	// System.out.println(emp.size());
     // Collections.sort(emp);
	
	emp.sort(new empComparer(Criteria.Address));
	 for (employee i : emp) {
		System.out.println(i);
	}
	 
	 }
 
 
 public static void uniqueData() {
	 HashSet<employee> emp = new HashSet<employee>();
	 emp.add(new employee(1, "Rahul", "Jhansi", 12231));
	 emp.add(new employee(1, "Rahul", "Jhansi", 231231));
	 emp.add(new employee(1, "Rahul", "Jhansi", 231231));
	 emp.add(new employee(1, "Rahul", "Jhansi", 2312312));
	 emp.add(new employee(1, "Rahul", "Jhansi", 23123));
	 
	 System.out.println(emp.size());
	 
	 
 }
}


