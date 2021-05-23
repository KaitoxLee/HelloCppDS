void Binary_Insertion_Sort(int* data,int size)
{
	for(int i = 1 ; i < size ; i++){
		int low = 0,high = i-1;//��i֮ǰ�ҵ����λ�� 
		int tmp = data[i],mid,j;
		while(low <= high){//Ѱ�����λ�� 
			mid = (low+high)/2;
			if(data[mid] < tmp){
				//�����м�ֵ�����Ұ벿��Ѱ�� 
				low = mid+1;
			}else{//С���м�ֵ������벿��Ѱ��
				high = mid-1;
			}
		}
		for(j = i ; j > low ; j--){
			data[j] = data[j-1];
		}
		data[j] = tmp;
	}
 } 