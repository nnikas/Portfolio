import java.io;
public class EngineInventoryDemo {

	public static void main(String[] args) {
		
		EngineInventory inv = new EngineInventory();
		
		Engine e1 = new TwoStroke(1, 2000, 25, 'g');
		Engine e2 = new TwoStroke(2, 2000, 25, 'g');
		Engine e3 = new TwoStroke(3, 2000, 25, 'd');
		Engine e4 = new TwoStroke(2, 2000, 25, 'd');
		
		System.out.println(inv.addEngine(e1));
		System.out.println(inv.addEngine(e2));
		System.out.println(inv.addEngine(e3));
		System.out.println(inv.addEngine(e4));
		
		System.out.println(inv.searchEngine('g'));
		System.out.println(inv.searchEngine('d'));
		
		
	}

}
