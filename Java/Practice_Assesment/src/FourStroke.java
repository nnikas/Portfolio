
public class FourStroke extends Engine {

	public FourStroke(int id, double volume, double fuelCapacity, char fuelType) {
		super(id, volume, fuelCapacity, fuelType);
		// TODO Auto-generated constructor stub
	}

	public double getMileage() {
		
		if(getFuelType()=='g'){
			mileage = getVolume()*2*3/1000 +getFuelCapacity()/2;
		}
		else{
			mileage = getVolume()*2*2/1000 +getFuelCapacity()/4;
		}
		return mileage;
	}

}
