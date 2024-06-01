#include<iostream>
using namespace std;
int Fert_x=20,Fert_y=20,Fert_z=20;
int pricex,pricey,pricez;
int Store(){
	cout<<"Welcome to Our Store"<<endl;
	pricex=5850,pricey=6200,pricez=6500;
	return Fert_x+Fert_y+Fert_z;
}
void Sales(){
	string sale;
	int am;
	cout<<"Welcome to Our Fertilizers Shop"<<endl;
	cout<<"Here are the Brands in the Store"<<endl;
	cout<<"CAN\t"<<"DAP\t"<<"NPK\t"<<endl;
	cout<<"Which Brand would you like to purchase"<<endl;
	cin>>sale;
	if(sale=="CAN" || sale=="can"|| sale=="Can")
	{
		cout<<"The price of CAN is "<<pricex<<endl;
		cout<<"How many sacks do you need"<<endl;
		cin>>am;
		cout<<"The Total Amount to be paid is "<<pricex*am<<endl;
	}
	else if(sale=="DAP" || sale=="dap"|| sale=="Dap")
	{
		cout<<"The price of DAP is "<<pricey<<endl;
			cout<<"How many sacks do you need"<<endl;
		cin>>am;
		cout<<"The Total Amount to be paid is "<<pricey*am<<endl;
	}
	else if(sale=="NPK "|| sale=="npk"|| sale=="Npk")
	{
		cout<<"The price of  NPK is "<<pricez<<endl;
			cout<<"How many sacks do you need"<<endl;
		cin>>am;
		cout<<"The Total Amount to be paid is "<<pricez*am<<endl;
	}
}
int main(){
	int Key,StoTotal,SalTotal;
	cout<<"Welcome to GPL LTD"<<endl;
	// This is the Store Keepers phase
	for(int i=0;i<20;i++){
	
	cout<<"Press Key 1 to access our Store"<<endl;
	// This is the ShopKeepers Phase
	cout<<"Press Key 2 to access our Sales"<<endl;
	cin>>Key;
	if (Key==1)
	{
		StoTotal=Store();
	}
	else if( Key==2)
	{
		Sales();	
	}
	}
}
