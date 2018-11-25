interface Design{
	void frontCamera(int pixel, String sensor);
	void flashLight(String type, int lumins);
	void Battery(int capacity, String type);
}

interface Market{
	void targetPop(int age, String region);
	void marketCompition(int brands, String peerComp);
}


class Phone implements Design, Market{

	@Override
	public void frontCamera(int pixel, String sensor) {
		System.out.println("The Pixel size of the the camera is "+pixel+" the type of sensor used is "+sensor);
		
	}

	@Override
	public void flashLight(String type, int lumins) {
	System.out.println("the type of the flashlight is  "+type+" the lumin it throws is "+lumins);
		
	}

	@Override
	public void Battery(int capacity, String type) {
	System.out.println("The battery capacity of the battery is "+capacity+" the of battery used is "+type);		
	}

	@Override
	public void targetPop(int age, String region) {
		System.out.println("the age involved in buying the phone is "+age+"in the country"+ region);
		
	}

	@Override
	public void marketCompition(int brands, String peerComp) {
		System.out.println("the brands whoich are the major compitions"+brands+"the most businees to deal with is "+peerComp);
		
	}
	
}

public class InterfaceDemo {
 public static void main(String[] args) {

	 Phone cell = new Phone();
	 cell.frontCamera(12, "CMOS");
	 cell.flashLight("DualLight", 4000);
	 cell.Battery(4000, "Lithium-Ion");
	 
	 Design proto = new Phone();// using the Interface object and instantiating it with the Phone which the concrete class
	 proto.Battery(41000, "Neodyium-Ion");
	 Market business = new Phone();
	 
	 business.marketCompition(5, "Samsung");// using the another interface
	 Market currentMarket = (Market)proto;//creating Market type interface object and making it equal to the Design type object
	 //called proto but it is instantiated by the Phone class. 
	 currentMarket.targetPop(21, "USA");
	 
}
}
