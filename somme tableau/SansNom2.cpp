using namespace std;

//fct de remplissage
void remplir(int tab[], int n){
	for(int i=0; i<n; i++){
			cin>>tab*[i];
	}
}

//fct affichage

void affi(int tab[], int n){
	for(int i=0; i<n; i++){
		cout<<tab[i]<<"\t";
	}}
	
//fct inverser
int inverse(int *tab[], int& X, int n) {
	
	for(int i = 0; i < n/2; i++){
		X=tab[i];
    	tab[i]=tab[n-1-i];
   		tab[n-1-i]=X;
   		cout<< tab[i] <<"\n";
					}
	return *tab;
				}
				
				
int main(){
	int n,X;
	int tab[100];
	cin>>n;
	remplir(tab, n);
	affi(tab,n);
	inverse(tab,X,n);

    
    return 0;
}

