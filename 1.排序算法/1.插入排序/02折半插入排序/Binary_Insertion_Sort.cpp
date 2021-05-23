void Binary_Insertion_Sort(int* data,int size)
{
	for(int i = 1 ; i < size ; i++){
		int low = 0,high = i-1;//在i之前找到最佳位置 
		int tmp = data[i],mid,j;
		while(low <= high){//寻找最佳位置 
			mid = (low+high)/2;
			if(data[mid] < tmp){
				//大于中间值，到右半部分寻找 
				low = mid+1;
			}else{//小于中间值，到左半部分寻找
				high = mid-1;
			}
		}
		for(j = i ; j > low ; j--){
			data[j] = data[j-1];
		}
		data[j] = tmp;
	}
 } 