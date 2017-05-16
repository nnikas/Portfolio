import java.util;

public class EngineInventory {

	ArrayList<Engine> EArray= new  ArrayList<Engine>();


public addEngine(Engine e){
	int temp=0;
	int cout=0;
	for(Engine x:EArray){
		if(x==e){
			temp=-1;
		}
		else if(x==NULL){
			temp=-1;
		}
		else{
			EArray.addElement(e);
			count++;
			temp=count;
		}
	}
	return temp;
	
}

public double searchEngine(char c){
	int count=0;
	for(Engine x:EArray){
		if(x.getFuelType()==c){
			count++;
		}
	}
	return count;
}
}