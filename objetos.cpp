#include <iostream>
using namespace std;
int main(){
    int nodeproductos, precio, descuento;
    cout<<"ingrese el precio del producto: ";
    cin>>precio;
    cout<<"ingrese el numero de productos seleccionados: ";
    cin>>nodeproductos;
    if (nodeproductos=100)
    {
	cout<<"usted tendra un descuento del 40%";
    descuento=precio*40/100;
    cout<<"el total de su compra con descuento incluido es:"<<descuento<<endl;
	}
    if (nodeproductos=25&&100)
     {
	cout<<"usted tendra un descuento del 20%";
    descuento=precio*20/100;
    cout<<"el total de su compra con descuento es: "<<descuento<<endl;
    }
	if(nodeproductos=10&&24)
	 {
    cout<<"usted tendra un descuento del 10%";
    descuento=precio*10/100;
    cout<<"el total de su compra con descuento es: "<<descuento<<endl;
    }
	if (nodeproductos<10)
     {
	cout<<"usted no tendra descuento";
    cout<<"el total de su compra sin descuento es: "<<precio<<endl;
    }
}
