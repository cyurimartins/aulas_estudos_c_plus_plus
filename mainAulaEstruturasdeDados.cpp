#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int m[3][3];
	int l=0, c=0;
	int opcao=0, quantidade=0, codigo=0;
	int existe=0, posicao;
	float resultado=0;
	
	while(opcao!=4 && opcao<5) {
		cout<<"\n 1 - Cadastrar"<<endl; 
		cout<<"\n 2 - Exibir"<<endl;
		cout<<"\n 3 - Venda"<<endl;
		cout<<"\n 4 - Sair"<<endl;
		cin>>opcao;
		
		if (opcao==1){
			for(l=0;l<3;l++){
				for(c=0;c<3;c++){
					cout<<"\nDigite o valor"<<endl;
					cin>>m[l][c];					
				} //fim for
			} //fim for
		} //fim if
		
		if (opcao==2){
			cout<<"\n\tProduto: \t| Valor \t|Desc%"<<endl;
			for(l=0;l<3;l++){
				cout<<"\n\t "<<m[1][0]<<"\t\t| ";
				cout<<m[l][1]<<"\t\t| ";
				cout<<m[1][2]<<"%"<<endl;
				cout<<"\t----------------------------";
			} //fim for			
		}//fim if
		
		if (opcao==3){
			existe=0;
			cout<<"\nDigite a quantidade: "<<endl;
			cin>>quantidade;
			cout<<"\nDigite o codigo do produto"<<endl;
			cin>>codigo;
			for(l=0;l<3;l++){
				if(codigo==m[l][0]){
					existe=1;
					posicao=1; //posicao da linha
				} //fim if					
			} //fim for
			
			if (existe==1){
				cout<<"existe"<<endl;
				resultado = quantidade*m[posicao][1];
				cout<<"\nVenda:"<<resultado<<endl;				
			} //fim if
			else {
				cout<<"Nao existe"<<endl;
			}//fim else
		} //fim if
	} //fim while
	
	return 0;
}
