#include<stdio.h>
#include<math.h>

int main() {
    int n = 10;
    int m;
    int a[10];
    int i;
	int min= 0; 							//�м����
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    } 

	for(int i = 0; i < 10; i++){			//����10��ѭ��	
		for(int j = i + 1; j < 10; j++){	//ѭ���Ƚ�ʣ��ı���
			if(a[i] < a[j]){				//���ǰ��һ�����Ⱥ������󣬽�����������ֵ
				min = a[i];
				a[i] = a[j];
				a[j] = min;
			}
		}
	}
 
	for(int i = 0; i < 10; i++){ 					//ѭ����������Ժ�Ľ��
		if(i != 9){
			printf("%d ", a[i]);
		}else{
			printf("%d", a[i]);
		}
	}
	
 	return 0;
} 
