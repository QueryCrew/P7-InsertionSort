
import java.util.*;

class Main {
	public static void main (String[] args) {
		int[] array={5,3,7,1,8,6,9};
		//the basic theorem is to take one-one element from the array and check if all the elements before it are smaller than it or not 
		//if not then we will put that element at that index before which all elements are smaller than it 
		
		
		//here we start from 1 index so as to make j=0
		for(int i=1;i<array.length;i++){
		    
		    // here we store the number at i index
		    int num=array[i];
		    
		    //we will check the array before the i index thus initializing j=i-1
		    int j=i-1;
		    
		    //we will check if element at j which is before i, is greater than element at i 
		    //then change the element at index j+1 to element at index j
		    while(j>=0 && array[j]>num){
		        array[j+1]=array[j];
		        j--;
		    }
		    
		    //here j will be 1 step before where we have to put our element at index i 
		    //thus changing element at j+1 to element at index i
		    array[j+1]=num;
		}
		System.out.print(Arrays.toString(array));
	}
}
