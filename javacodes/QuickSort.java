class QuickSort{
	public static void main(String[]args){

		int[] arrA = {8,5,10,3,9,2,1,11,4,6};
		int[] arrB = new int[arrA.length];

		int pivot = 0;
		int x = 0;
		int y = 0;
		int mid = 0;
		boolean cont = true;

		while(cont){
			pivot = arrA[0];

			x=1;
			y=0;
			while(x<arrA.length){
				if(arrA[x]<pivot){
					arrB[y] = arrA[x];
					y++; 
				}
				x++;
			}
			arrB[y] = pivot;
			mid = y;

			x=1;
			y++;
			while(x<arrA.length){
				if(arrA[x]>pivot){
					arrB[y] = arrA[x];
					y++;
				}
				x++;
			}

			for(int i=0; i<=mid; i++){
				arrA[i] = arrB[i];
			}

			pivot = mid+1;
			x = mid + 2;
			y = mid+1;

			while(x<arrB.length){
				if(arrB[x]<pivot){
					arrA[y] = arrB[x];
					y++;
				}
				x++;
			}
			arrA[y] = pivot;
			x = mid + 2;
			y++;

			while(x<arrB.length){
				if(arrB[x]>pivot){
					arrA[y] = arrB[x];
					y++;
				}
				x++;

			}

			for(int i=0; i<arrA.length-1; i++){
				if(arrA[i]>arrA[i+1]){
					cont = true;
				}
				else{
					cont = false;
				}
			}
		}

		for(int i=0; i<arrA.length; i++){
			System.out.println(arrA[i]);
		}
	}
}