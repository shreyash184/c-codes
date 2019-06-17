#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value,weight;
    // Item(int value, int weight): value(value), weight(weight){}
};
bool comp(Item a, Item b){
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}


double round( double var) 
{ 
    // 37.66666 * 100 =3766.66 
    // 3766.66 + .5 =37.6716    for rounding off value 
    // then type cast to int so value is 3766 
    // then divided by 100 so the value converted into 37.66 
    double value = (int)(var * 100 + .5); 
    return (double)value / 100; 
} 

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,W;
	    cin>>n>>W;
	    Item a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i].value;
	        cin>>a[i].weight;
	    }
	    int curWeight = 0;
	    double finalValue = 0.0;
	    sort(a, a+n, comp);
	    for(int i=0;i<n;i++){
	        if(curWeight+a[i].weight <= W){
	            curWeight+=a[i].weight;
	            finalValue+=a[i].value;
	        }else{
	            int remain = W-curWeight;
	            finalValue+=a[i].value * ((double)remain/a[i].weight);
	            break;
	        }
	    }
	    cout<<round(finalValue)<<endl;
	}
	return 0;
}