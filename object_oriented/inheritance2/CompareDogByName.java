package inheritance2;

import java.util.Comparator;

public class CompareDogByName implements Comparator<Dog> {

    @Override
    public int compare(Dog d1, Dog d2) {
        if (d1.name.compareTo(d2.name) == 0) {
            if (d1.age < d2.age) {
                return -1;
            } else if (d1.age == d2.age) {
                return 0;
            } return 1;
        } else {
            return d1.name.compareTo(d2.name);
        }
    } 
    
}
