


public abstract class Engine {

		private int id;
		private double volume;
		private double fuelCapacity;
		private char fuelType;
		protected double mileage;
		public Engine(int id, double volume, double fuelCapacity, char fuelType){
			this.id=id;
			this.volume=volume;
			this.fuelCapacity=fuelCapacity;
			this.fuelType=fuelType;
		}
		public abstract double getMileage();
		public int getId() {
			return id;
		}
		public void setId(int id) {
			this.id = id;
		}
		public double getVolume() {
			return volume;
		}
		public void setVolume(double volume) {
			this.volume = volume;
		}
		public double getFuelCapacity() {
			return fuelCapacity;
		}
		public void setFuelCapacity(double fuelCapacity) {
			this.fuelCapacity = fuelCapacity;
		}
		public char getFuelType() {
			return fuelType;
		}
		public void setFuelType(char fuelType) {
			this.fuelType = fuelType;
		}
		
		
}
