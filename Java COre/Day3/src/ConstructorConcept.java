

class Camera{
	String sensor;
	String type;
	int pixelSize;
	String tech;
	
	public Camera(String sensor, String type, int size, String tech) {
		this.sensor=sensor;
		this.type= type;
		this.pixelSize= size;
		this.tech=tech;
		
	}
	
	 
}

class Battery {
	int capacity;
	String type;
    String tech;
    Battery(int capacity, String type, String tech){
    	this.capacity=capacity;
    	this.type=type;
    	this.tech=tech;
    
    }
    public void ChargeBAttery() {
    	System.out.println("The Battery is getting charged");
    }
}
class Mobile{
	Camera frontCamera;
	Battery mainBattery;
	int screenSize;
	String name;
	int price;
	
	Mobile(Battery main, Camera frontSpecs){
		this.mainBattery=main;
		this.frontCamera= frontSpecs;
	}
	
	void SwitchOnMobile() {
		System.out.println("Welcome to the Android");
		mainBattery.ChargeBAttery();
	}
	
}


public class ConstructorConcept {
 public static void main(String[] args) {
	 Mobile mob = new Mobile((new Battery(41000, "Lithuim-Ion", "Fast-Charge")),(new Camera("CMOS", "Auto=Focus", 12, "AI-EdgeDetection")));
	 mob.SwitchOnMobile();
	 
}
}
